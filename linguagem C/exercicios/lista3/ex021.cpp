#include <stdio.h>

/*
	21) Escreva um programa que gere a sa�da abaixo (10 linhas, 20 * por linha).
	Restri��es:
	 A instru��o �printf� pode ser utilizada no m�ximo 2 vezes;
	 O \n para saltar linha pode ser utilizado no m�ximo 1 vez.
*/
int main () {
	
	
	// Variaveis
	
	
	int cont;
	
	// Codigo
	printf("\n");
	for (cont = 1; cont <= 200; cont++)
	{
		printf("*");
		if (cont % 20 == 0) 
		{
			printf("\n");
		}
	
	}
	return 0;
}
