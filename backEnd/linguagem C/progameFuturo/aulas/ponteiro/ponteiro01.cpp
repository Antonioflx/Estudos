#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*

	Aula 184: O que � e como criar um ponteiro?
	para imprimir o endere�o de mem�ria de uma variavel 
	utiliza a m�scara %p
	
	Ponteiro: 
		� uma variavel que armazena um endere�o de mem�ria.
		declarando a var
		Ou seja, s� armazena endere�o de memoria.
	
	int *p; -> utilizando * antes da var.

*/
int main() {
	
	setlocale(0, "Portuguese");
	
	int num = 10, num2 = 20, num3 = 30;
	int *p, *p1;
	
	// teste com char
	
	char letra = 'f';
	char *pC;
	
	pC = &letra;
	
	printf("\n\nTESTE 1:");
	printf("\nValor de num: %d\n", num);
	
	// Imprimir o endere�o utilizar -> %p e utilizar o & -> endere�o onde est� a vari
	printf("Endere�o de num: %p\n", &num);
	
	
	p = &num2;
	printf("\n\nTESTE 2:");
	printf("\nValor de num2: %d\n", num2);
	printf("Endere�o de num2: %p\n", p);
	
	
	// Como fazer para pegar o valor?
	
	// Atribuir o endere�o
	
	p1 = &num3;
	printf("\n\nTESTE 3:");
	// Mostrando o valor de p1
	printf("\nValor de num3: %d", num3);
	printf("\nValor de p1: %p\n", p1);
	
	// ponteiro tbm � uma variavel, ou seja, ela tbm vai ter um endere�o
	printf("Endere�o de num3: %p\n", &num3);
	printf("Endere�o de p1: %p\n", &p1);
	
	// Mostrando o valor que ele est� apontando por ele.
	// tem que trocar a mascara para o tipo (nesse caso, int) e colocar * antes do p1
	printf("Valor apontado por p1: %d\n", *p1);
	
	
	printf("\n\nTESTE 4:");
	printf("\nValor de letra: %c", letra);
	printf("\nEndere�o de letra: %p", &letra);
	printf("\nValor de pC: %p", pC);
	printf("\nEndere�o de pC: %p", &pC);
	printf("\nValor apontado por pC: %c\n", *pC);
	
	return 0;
	
}
