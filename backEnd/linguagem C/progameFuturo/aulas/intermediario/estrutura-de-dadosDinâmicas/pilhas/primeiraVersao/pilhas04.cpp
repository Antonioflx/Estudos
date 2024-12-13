#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 225: Estruturas de dados din�micas
		
		Imprimir.

*/

typedef struct {
	int dia, mes, ano;
} t_Data;

typedef struct {
	char nome[50];
	t_Data data;
} t_Pessoa;

typedef struct no {
	t_Pessoa p;
	struct no *proximo;
} t_No;


t_Pessoa lerPessoa() {
	t_Pessoa p;
	
	printf("\nDigite o nome e data de nascimento dd mm aaaa:\n");
	scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
	
	return p;
}


void imprimirPessoa (t_Pessoa p) {
	printf("\nNome: %s\nData: %2d/%2d/%d\n", 
							p.nome, 
							p.data.dia, 
							p.data.mes,
							p.data.ano);
}

// fun��o para a opera��o push (empilhar)
// Retornar um ponteiro para o N�
t_No* empilhar(t_No *topo) { // parametro uma copia do ponteiro topo (NULL)

	// criando um novo n�
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		// atribuindo para a estrutura de dados pessoa -> uma pessoa.
		novo->p = lerPessoa();
		
		// atribuindo para a estrutura de no *proximo -> para o topo (antigo NULL)
		novo->proximo = topo;
		
		return novo; // retornar novo.
		 
	}
	else
		printf("\nErro ao alocar mem�ria...\n");
	return NULL;
}

// fun��o para a opera��o pop (desempilhar)
// Retornar um ponteiro para o N�
t_No* desempilhar(t_No **topo) { // parametro o endere�o de mem�ria do ponteiro -> para altera o valor do topo.
	
	// conteudo do ponteiro (*topo) � diferente de NULL (A pilha est� preenchida)
	if(*topo) {
		
		// 1 passo criar um ponteiro para receber o topo
		t_No *remover = *topo;
		
		// 2 passo fazer que o topo aponte para o pr�ximo ponteiro
		*topo = remover->proximo;
		
		return remover;
		
		
	} else // caso a pilha esteja vazia, retornar� NULL.
		printf("\nPilha vazia!\n");
	return NULL;
	
	
}

 void imprimirPilha(t_No *topo) {
	
	printf("\n----------------------- PILHA -------------------------\n");
	// fazer um loop enquanto n�o chega em NULL (fim da pilha)
	while(topo) {
		
		// procedimento para imprimir pessoa
		imprimirPessoa(topo->p);
		// atribuir o topo o ponteiro do proximo ponteiro, se nao entra em loop
		topo = topo->proximo;
		
	}
	
	printf("\n----------------------- FIM PILHA -------------------------\n");
	
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// criando o no do topo
	t_No *remover, *topo = NULL;
	int opcao;
	
	do {
		printf("\n[0.] -> Sair\n[1.] -> Empilar\n[2.] -> Desempilhar\n[3.] -> Imprimir\n");
		scanf("%d", &opcao);
		getchar();
		printf("\nOpcao: %d\n", opcao);
		
		switch(opcao) {
			case 0: break;
			
			case 1:
				topo = empilhar(topo);
				
				break;
			
			case 2:
				remover = desempilhar(&topo);
				
				if(remover) {
					printf("\nElemento removido com sucesso!\n");
					imprimirPessoa(remover->p);
				} else
					printf("\nSem n� para ser removido!\n");
				break;
				
			case 3:
				imprimirPilha(topo);
				break;
			
			default: printf("\n\n\t[ERROR] -> Valor inv�lido!\n\n"); break;
		}
	} while(opcao);
	

	return 0;
} 
