#include <stdio.h>


/*
			Aula 5
	Lendo n�meros reais
*/

int main () {
	
	// Vari�veis
	
	float numero = 3.1415;
	float numero1;
	
	// Para n�mero reais a mascara utilizada � %f
	
	printf("\nO valor da variavel e de: %.2f\n", numero); // %.2f -> Configura a quantidade de casas de um n�mero float.
	
	// Fazer o usu�rio digitar o valor.
	printf("\nDigite um numero real: ");
	scanf("%f", &numero1);
	printf("\n\n O valor digitado foi: %.3f", numero1);
	
	return 0;
}
