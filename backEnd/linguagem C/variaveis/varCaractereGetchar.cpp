#include <stdio.h>

/*
			Aula 7
		Lendo caracteres
		fun��o getchar()
*/

int main() {
	
	
	// Vari�veis
	
	char letra;
	
	printf("\n\nDigite uma letra: ");
	letra = getchar(); // == scanf("%c", &letra);
	
	printf("\nCaracter lido: %c\n", letra);
	
	
	return 0;
}
