#include <stdio.h>



/*
				Aula 24
			Operador Aritm�ticos.
*/

int main() {
 
 	// Vari�veis
 	
 	int a = 10, b = 20;
 	
 	
 	// C�digo
	printf("\nSoma: %d\n", a + b);
	printf("\nSubtracao: %d\n", a -b);
	printf("\nMultiplicacao: %d\n", a * b);
	
	// --> Nesse caso, a linguagem C > Se o dividendo for Inteiro a divis�o ser� Inteira. Caso, o dividendo seja Real a divis�o ser� Real. 
	printf("\nDivisao: %.1f\n", (float)a / b); // --> Solu��o. Coloca o ponto dps do 10 -> 10.0 ou (float) a / b;
 
 	// Utilizando o operadore % -> Resto da Divis�o.
 	
 	printf("\nResto da divisao inteira: %d\n", 20 % 3);
 	
 	
}
