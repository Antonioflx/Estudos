#include <stdio.h>

/*
			Aula 8
		Lendo caracteres		
		fun��o getc();
*/

int main() {
	
	// Vari�veis
	
	char letra;
	
	printf("Digite um caracterer: ");
	letra = getc(stdin);	// == letra = getchar(); == scanf("%c", &letra);
		
	printf("\nCaracter lido: %c\n", letra);
	
	return 0;
}
