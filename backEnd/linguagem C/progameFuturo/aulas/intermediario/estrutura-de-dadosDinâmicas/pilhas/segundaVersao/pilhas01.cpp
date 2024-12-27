#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 225: Estruturas de dados din�micas
			Pilhas: Segunda vers�o.
		
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

// teremos um ponteiro especificamente para o topo

typedef struct {
	t_No *topo;
	int tam;
} t_Pilha;

// procedimento para criar a pilha
void criarPilha (t_Pilha *p) {
	p->topo = NULL;
	p->tam = 0;
}

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
// nao precisamos retornar nada na segunda versao, porque vamos receber um ponteiro
// para a pilha
void empilhar(t_Pilha *p) { // parametro uma copia do ponteiro topo (NULL)

	// criando um novo n�
	t_No *novo = (t_No*)malloc(sizeof(t_No));
	
	if(novo) {
		// atribuindo para a estrutura de dados pessoa -> uma pessoa.
		novo->p = lerPessoa();
		
		// atribuindo para a estrutura de no *proximo -> para o topo (antigo NULL)
		novo->proximo = p->topo;
			 
		// em vez de retornar o novo na main, s� atribuir para o topo da pilha
		p->topo = novo;
		p->tam++;
	}
	else
		printf("\nErro ao alocar mem�ria...\n");
}

// fun��o para a opera��o pop (desempilhar)
// Retornar um ponteiro para o N�
t_No* desempilhar(t_Pilha *p) { // parametro o endere�o de mem�ria do ponteiro -> para altera o valor do topo.
	// conteudo do ponteiro (*topo) � diferente de NULL (A pilha est� preenchida)
	if(p->topo) {
		
		// 1 passo criar um ponteiro para receber o topo
		t_No *remover = p->topo;
		
		// 2 passo fazer que o topo aponte para o pr�ximo ponteiro
		p->topo = remover->proximo;
		p->tam--;
		return remover;
		
		
	} else // caso a pilha esteja vazia, retornar� NULL.
		printf("\nPilha vazia!\n");
	return NULL;
	
	
}

 void imprimirPilha(t_Pilha *p) {
	t_No *aux = p->topo; // criando um n� auxiliar para apontar para o topo da pilha.
	printf("\n----------------------- PILHA Tam: %d -------------------------\n", p->tam);
	// fazer um loop enquanto n�o chega em NULL (fim da pilha)
	while(aux) {
		
		// procedimento para imprimir pessoa
		imprimirPessoa(aux->p);
		// atribuir o topo o ponteiro do proximo ponteiro, se nao entra em loop
		aux = aux->proximo;
		
	}
	
	printf("\n----------------------- FIM PILHA -------------------------\n");
	
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// criando o no do topo
	t_No *remover;
	t_Pilha p;
	
	criarPilha(&p);
	int opcao;
	
	do {
		printf("\n[0.] -> Sair\n[1.] -> Empilar\n[2.] -> Desempilhar\n[3.] -> Imprimir\n");
		scanf("%d", &opcao);
		getchar();
		printf("\nOpcao: %d\n", opcao);
		
		switch(opcao) {
			case 0: break;
			
			case 1:
				empilhar(&p);
				
				break;
			
			case 2:
				remover = desempilhar(&p);
				
				if(remover) {
					printf("\nElemento removido com sucesso!\n");
					imprimirPessoa(remover->p);
					
					free(remover);
				} else
					printf("\nSem n� para ser removido!\n");
				break;
				
			case 3:
				imprimirPilha(&p);
				break;
			
			default: printf("\n\n\t[ERROR] -> Valor inv�lido!\n\n"); break;
		}
	} while(opcao);
	

	return 0;
} 
