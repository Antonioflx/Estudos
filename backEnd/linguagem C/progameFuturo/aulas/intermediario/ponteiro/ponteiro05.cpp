#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 188: Vetor � sempre ponteiro?
		Sim, atrav�s do ind�ce (apontador -> endere�o de mem�ria)
		Podemos mudar o valor do elemento (dentro da fun�ao principal)
*/



void imprimir(int vet[], int tam) {
	
	int i;
	
	for(i = 0; i < tam; i++) 
		printf(" %d", vet[i]);
		
}

// dobrar.
void dobro(int vet[], int tam) {
	int i;
	
	for(i = 0; i < tam; i++)
		vet[i] *= 2;
}

int main() {
	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int tam = sizeof(vet)/4;

	
	printf("\n\n\tPRIMEIRA IMPRESS�O\n\n");
	imprimir(vet, tam);
	
	printf("\n\n\tSEGUNDA IMPRESS�O\n\n");
	dobro(vet, tam);
	imprimir(vet, tam);
	
	return 0;
} 
