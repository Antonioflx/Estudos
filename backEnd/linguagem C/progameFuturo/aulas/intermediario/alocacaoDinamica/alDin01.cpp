#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
			Aula 197: Aloca��o din�mica de mem�ria com a fun��o malloc.
		Retorna um ponteiro para a regi�o de mem�ria alocada ou NULL.

	
		malloc -> m (Memory) + alloc (Aloca��o);
		
			Ela aloca blocos de mem�ria em byte em byte.
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Codigo

	/*
			Forma est�tica:
		
		int x; -> Cria��o de vari�vel de forma est�tica.
		
		
		
			Forma din�mica:
		Criando uma variavel din�mica -> Quando meu progama est� em execu��o:
		
		int *x;
		x = (int*)malloc(sizeof(int));
	
	*/
	
	/*
		(int*) -> 
			Converter o ponteiro gen�rico do tipo void* retornado por malloc()
			para o ponteiro do tipo int
			
		malloc() -> fun��o para alocar um bloco de mem�ria no heap(�rea de mem�ria din�mica)
		
		sizeof() -> fun��o para retornar o tamanho em bytes de alguma coisa.
	*/
	
	int *x;
	x = (int*)malloc(sizeof(int));
	
	if(x) {
		printf("Memoria alocada com sucesso!\n");
		printf("\nX: %d\n", *x);
		*x = 50;
		printf("\nX: %d\n", *x);
	}
	else
		printf("\nERRO\n");
	return 0;
} 
