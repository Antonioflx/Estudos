#include <stdio.h>


/* 
			Aula 4
	Lendo n�meros inteiros

*/

int main () {
	
	// Vari�veis
	
	int valor,valor1,soma; // Criei uma variavel do tipo inteiro.
	
	valor = 50; // Atribui ( = ) o valor 50 � variavel valor.
	
	// Fazer o usu�rio digitar o valor
	
	printf("\n\nDigite um valor inteiro:");
	scanf("%d", &valor);       // Precisa colocar a m�scara %d(n�mero int) e o & do lado da var
	
	printf("\nDigite outro valor inteiro:");
	scanf("%d",&valor1);
	
	printf("Os valores sao: %d, %d", valor, valor1);
	printf("\n\nJa a soma e de");
	soma = valor + valor1;
	printf("%d", soma);
	
	
	
	return 0;
}
