#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 140: Convertendo uma String para mai�sculo ou minusculo com as fun��es:
	->	strupr()
	->	strlwr()
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	char palavra[50] = {"Bom dia simp�tica"};
	// Codigo
	
	printf("\n%s", palavra);
	
	strupr(palavra);
	printf("\n%s", palavra);

	strlwr(palavra);
	printf("\n%s", palavra);

	return 0;
} 
