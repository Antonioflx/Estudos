#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 229: Como simular a recurs�o do fatorial com uma pilha?
		
						5
					4		4
				3				3
			2						2
		1								1
	0										0		
		
*/



typedef struct no {
	int numero;
	struct no *proximo;
}t_No;

typedef struct {
	t_No *topo;
	int tam;
} t_Pilha;

// procedimento para criar a pilha
void criarPilha(t_Pilha *p) {
	p->topo = NULL; // primerio n� = NULL
	p->tam = 0; // obviamente o tamanho � 0.
}

int lerNumero() {
	t_No dado;
	
	printf("Digite o numero: ");
	scanf("%d", &dado.numero);
	
	return dado.numero;
}

void empilhar(t_Pilha *p, int num) {
	
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	if(novo) {
		
		novo->numero = num; // colocando o dado no n�
	
		novo->proximo = p->topo; // atribuindo que o ponteiro aponta para o n� anterior
		p->topo = novo; // ponterio novo � o novo topo da pilha.
		p->tam++; // acrescentando +1 na pilha.
			
			
	} else
		printf("\nVixeeee");
	
}

void imprimirPilha(t_Pilha *p) {
	t_No *aux = p->topo;
	
	while(aux) {
		printf("\t%d\n", aux->numero);// imprimir o num
		aux = aux->proximo; // atribuindo a estrutura aux o no que o ponteiro proximo aponta.
	}
}

// desempilhar , pega o topo * pelo ponteiro, assim vai.

t_No* desempilhar(t_Pilha *p) {
	
	if(p->topo) {
		t_No *remover = p->topo;
		
		p->topo = remover->proximo;
		p->tam--;
		
		return remover;
	} else
		printf("\nN�o h� pilha!\n");
	return NULL;
}

int fatorial(int num) {
	
	t_Pilha p; // criar pilha para empilhar o numero at� chegar em 1
	criarPilha(&p);
	
	t_No *remover; // criar o no para desempilhar e fazer o fatorial
	
	
	// fazer o loop para empilhar cada num at� o 1.
	while(num > 1) {
		empilhar(&p, num); // empilha cada numero at� chegar no 1.
		num--;
	}
	
	
	// ex = 3; -> imprimir 2 dps o 3.
	imprimirPilha(&p);
	
	// loop para autalizar os valores de acordo com o desempilhamento do num
	
	while(p.topo) {
		remover = desempilhar(&p);
		num = num * remover->numero;
		
		free(remover);
	} 
	
	return num;
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	int num;
	num = lerNumero();
		
	printf("\t\n\nFat de %d! = %d", num, fatorial(num));
	return 0;
} 
