#include <stdio.h>

/*
			15) Fa�a um programa que pe�a ao usu�rio dois n�meros inteiros e apresente o resultado na
			multiplica��o entre os dois n�meros sem utilizar a opera��o de multiplica��o.
*/

int main () {
	
	// Variaveis
	
	int num1, num2, res,cont;
	
	// Codigo
	
	// Ler os dois numeros;
	
	printf("\nInforme o PRIMEIRO valor: ");
	scanf("%d", &num1);
	printf("\nInforme o SEGUNDO valor: ");
	scanf("%d", &num2);
	
	
	// 9, 2 --> 9x2 == 9+9. 10, 5 --> 10x5 == 10 + 10 + 10 + 10 + 10;
	
	// Fazer a multiplicacao sem usar [*]
	for (cont = 1; cont <= num2; cont++)
	{
		res += num1;
	}
	
	printf("\n\nRESULTADO: %d", res);
	return 0;
}
