#include <stdio.h>

/*
	25) Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequ�ncia de 1 at� Y,
	passando para a pr�xima linha a cada X n�meros.
	Exemplo de entrada:
	3 99
	Exemplo de sa�da:
	1 2 3
	4 5 6
	7 8 9
	10 11 12
	...
	97 98 99		
*/
int main () {

	// Variaveis
	
	int X, Y, cont, teste;
	
	// Codigo
	
	printf("\nINFORME dois valores: ");
	scanf("%d%d", &X, &Y);
	
	// Linha - > Coluna / 3;
	//  Coluna (ter� 3 colunas)
	
	
	for (cont = 1; cont <= Y; cont++)
	{
		if (cont % 3 == 0)
		{
			printf("%d ", cont);
			printf("\n");
		} 
		else
		{
			printf("%d ", cont);
		}
	}
	return 0;
}
