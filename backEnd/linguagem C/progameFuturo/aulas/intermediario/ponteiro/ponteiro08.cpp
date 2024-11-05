#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 191: O que � ponteiro para ponteiro?
		Ponteiro para ponteiro, utilizar  dois **
*/

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int A = 100, *B, **C;
	
	B = &A;
	C = &B;
	
	
	printf("\nEndere�o de A: %p\tConte�do de A: %d\n", &A, A);
	printf("Endere�o de B: %p\tConte�do de B: %p\n", &B, B);
	printf("Conteudo apontado por B: %d\n", *B);
	printf("Endere�o de C: %p\tConte�do de C: %p\n", &C, C);
	printf("Conteudo apontado por C: %d\n", **C);
	

	return 0;
} 
