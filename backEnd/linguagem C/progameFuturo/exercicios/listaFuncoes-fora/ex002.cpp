#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	1. Crie uma fun��o que receba um valor e diga se � nulo ou n�o.
*/


void checkNum(int n) {
	
	if(n == 0)
		printf("\nO numero %d  �  nulo\n", n);
	else
		printf("\nO numero %d n�o � nulo \n", n);
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	checkNum(num);
	return 0;
} 
