#include <stdio.h>

/*
		17) Fa�a um programa que pe�a n�meros ao usu�rio. Quando o usu�rio digitar o n�mero 0 (zero) o
		programa deve imprimir na tela quantos n�meros positivos e negativos foram digitados.

*/

int main () {

	// Variaveis
	
	int valor, cont, positivo, negativo;
	
	// Codigo
	
	for (cont = 1; cont <= 200; cont++)
	{
		printf("\nDigite o [%d] VALOR: ", cont);
		scanf("%d", &valor);
		if (valor < 0)
		{
			negativo++;
		} 
		else if (valor > 0) 
		{
			positivo++;
		} 
		else 
		{
			break;
		}
	}

	printf("\n\n\tvalores POSITIVOS: %d", positivo);
	printf("\n\n\tvalores NEGATIVOS: %d", negativo);
	return 0;
}
