#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
	Aula 160: Desenvolva uma fun��o recursiva que calcule a soma
	dos n�meros inteiros de 1 a N.
	
	n, n1, n2, n3, n4, n5, n6
	
	1, (1 + 1), (1 + 1 + 1) + (1 + 1 + 1 + 1) = 1 + 2 + 3 + 4 = 10.
	
	if (n == 1)
		return 1;
	else
		return n + func(n - 1); 
*/

int somaNum(int n) {
	
	// Caso o 0 seja irrelevante.
//	if(n > 1)
//		return n + somaNum(n - 1);
//	else {
//		return 1; 	
//	}
	

	if(n > 0) 
		return n + somaNum(n - 1);
	else
		return 0;
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int num;
	
	printf("\nVAMOS SOMAR: O in�cio � no n�mero 0, at� que n�mero voce quer somar?\n");
	printf("INFORME: ");
	scanf("%d", &num);
	printf("\nResultado: %d", somaNum(num));
	
	return 0;
} 
