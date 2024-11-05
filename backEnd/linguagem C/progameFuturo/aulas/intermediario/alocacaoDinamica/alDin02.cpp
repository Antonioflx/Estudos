#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
			Aula 198: Aloca��o din�mica de mem�ria com a fun��o calloc.
			
			calloc() -> Ela aloca mem�ria igual malloc.
			
			Diferen�a -> Quantidade de par�metros
			
			malloc() -> 1 par�metro: A quantidade de bytes que eu quero alocar.
			
			calloc() -> 
				2 par�metros: 
					1) A quantidade de elementos que eu quero alocar
					2) A quantidade de mem�ria da quantidade de elementos que passei no 1 param
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	
	/*
		(int*) -> 
			Converter o ponteiro gen�rico do tipo void* retornado por malloc()
			para o ponteiro do tipo int
			
		malloc() -> fun��o para alocar um bloco de mem�ria no heap(�rea de mem�ria din�mica)
		
		sizeof() -> fun��o para retornar o tamanho em bytes de alguma coisa.
	*/
	
	char *x;
//	x = (int*)malloc(sizeof(int));
	
	x = (char*)calloc(1, sizeof(char));

	
	if(x) {
		printf("Memoria alocada com sucesso!\n");
		printf("\nX: %c\n", *x);
		*x = 'A';
		printf("X: %c\n", *x);
	}
	else
		printf("\nERRO\n");
	return 0;
} 
