#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
					Aula 200: Aloca��o din�mica de mem�ria com a fun��o realloc.
			->	Retorna um ponteiro para a nova regi�o de mem�ria
			->	Se o ponteiro for nulo ela aloca mem�ria
			-> 	Se o novo tamanho for zero a mem�ria � liberada
			->	Se n�o houver mem�ria suficiente retorna null.
					
					
			realloc() 
			1 Parametro: -> Ponteiro
			2 Parametro: -> Novo tamanho
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	srand(time(NULL));
	/* 
		Forma est�tica:
			int tam;
			
		//	pedir ao usu o tamanho do vetor
		
			int vet[tam];
	*/
	
	// forma din�mica:
	
	int tam, *vet, i;
	
	printf("\nDigite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	vet = (int*)malloc(tam * sizeof(int));
	
	if(vet) {
		printf("\nMemoria alocada com sucesso:\n");
		for(i = 0; i < tam; i++) 
			*(vet + i) = rand() % 10;
		
		for(i = 0; i < tam; i++) 
			printf("%d Elemento: %d\n", i + 1, *(vet + i));
		
		printf("\nDigite o novo tamanho do vetor: ");
		scanf("%d", &tam);
		
		/*
			O realloc -> ele realoca uma nova regi�o de mem�ria, 
			copiar tudo que est� no vetor para uma nova regi�o 
			de mem�ria -> trabalhar com o vetor alterado.
		*/
		vet = (int*)realloc(vet, tam * sizeof(int));
		
		printf("\nVetor realocado:\n");
			
		for(i = 0; i < tam; i++) 
			printf("%d Elemento: %d\n", i + 1, *(vet + i));
	}
	else 
		printf("\n[ERRO]");
	return 0;
} 
