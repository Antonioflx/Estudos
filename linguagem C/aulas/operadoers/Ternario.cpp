#include <stdio.h>


/*
				Aula 43
		Operador tern�rio em C
		condi��o ? verdadeiro : falso
*/

int main() {
	
	int a;
	
	printf("\n Digite um valor inteiro qualquer: ");
	scanf("%d", &a);
	
	
	printf("\nOperador ternario:\n");
	a < 0 ? printf("\n\tValor negativo!\n") : 
		a > 0 ? printf("\n\tValor positivo!\n") :
			printf("\nValor igual a 0");
}
