#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
	2. Crie uma fun��o que receba tr�s valores, 'a', 'b' e 'c', 
	que s�o os coeficientes de uma equa��o do segundo grau e 
	retorne o valor do delta, que � dado por 'b� - 4ac'
*/


int deltValue(int a, int b, int c) {
	
	int delta = b * b - 4 * a * c;
	
	return delta;
	
}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int a, b, c;
	
	printf("Digite tres numero: ");
	scanf("%d%d%d", &a, &b, &c);
	
	printf("\nValor de Delta: %d", deltValue(a,b,c));
	
	// codigo
	return 0;
} 
