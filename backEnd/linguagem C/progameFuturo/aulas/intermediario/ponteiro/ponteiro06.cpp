#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 189: Aritm�tica de ponteiros com vetor.
		
*/



void imprimir(int vet[], int tam) {
	
	int i;
	
//	for(i = 0; i < tam; i++) 
//		printf(" %d", vet[i]);

	/* 
		Como o vetor � um ponteiro podemos utilizar o * (pois acessa o resultado) 
	 	Primeiro tem que fazer a aritm�tica de ponteiros (vet + i) 
		-> Para acessar o endere�o de mem�ria dos indices
	 	
	 	vet seria o endere�o de mem�ria + i (num)
	*/
	
	for(i = 0; i < tam; i++) 
		printf(" %d", *(vet + i));		
}


int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int vet[10] = {5, 10, 15, 20, 5, 6, 30, 8, 65, 10};
	int tam = sizeof(vet)/4;

	
	printf("\n\n\tPRIMEIRA IMPRESS�O\n\n");
	imprimir(vet, tam);
	
	
	return 0;
} 
