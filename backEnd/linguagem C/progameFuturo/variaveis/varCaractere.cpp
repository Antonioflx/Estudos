#include <stdio.h>


/*
			Aula 6
		Lendo caracteres
*/

int main() {
	
	// Vari�veis
	
	char teste = 'o'; // Variavel para CARACTERE.
	char sexo;
	
	printf("Valor da variavel teste: %c\n", teste); // Utiliza a m�scara %c
	
	// Fazer o usu�rio escrever.
	
	printf("\n\nQual e o seu sexo [M] ou [F] ? ");
	scanf("%c", &sexo);
	printf("\n\nO seu sexo e: %c", sexo);
	
	
	
} 
