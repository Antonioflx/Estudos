#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 223: Estruturas de dados din�micas
		
		Pilhas -> Opera��o push. Como empilhar um dado na estrutura de dados pilha

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
t_No* empilhar(t_No *topo) { // parametro o topo (NULL)

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


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// criando o no do topo
	t_No *topo = NULL;
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
			
				break;
				
			case 3:
				
				break;
			
			default: printf("\n\n\t[ERROR] -> Valor inv�lido!\n\n"); break;
		}
	} while(opcao);
	

	return 0;
} 
