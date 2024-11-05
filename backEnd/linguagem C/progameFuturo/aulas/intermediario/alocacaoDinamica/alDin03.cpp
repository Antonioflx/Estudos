#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*
				Aula 199: Como alocar um vetor din�mico?
			
			
				Aloca��o Din�mica:
			
			Declarando vari�veis din�micas:
		
				O recurso de mem�ria ser� utilizado 
				quando meu progama estiver em  execu��o.
		
				Essas vari�veis ficam em regi�es separadas da mem�ria:
				
				A regi�o de mem�ria que fica as vari�veis din�micas �
				bem maior do que a regi�o de mem�ria para as vari�veis est�ticas:
				
				Isso acontece, 
				porque a maior parte da mem�ria � gerenciada durante o uso da progama��o:		
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
			printf("%d Elemento: %d\n", i + 1, *(vet++));
		
	
	}
	else 
		printf("\n[ERRO]");
	return 0;
} 
