#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 143: Leia uma palavra e diga se ela � pal�ndroma.
		ama
		arara
		asa
		osso
		radar
		reviver
		socos
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	int tam, i, iguais = 0, diferente = 0;
	char palavra[30], copia[30];
	
	printf("\nDigite uma palavra: ");
	scanf("%s", palavra);
	
	/* SOLU��O 1:
		tam = strlen(palavra);
		for(i = 0; i <= strlen(palavra); i++) {
			copia[i] = palavra[tam - 1];
			tam--;
		}
		tam = strlen(palavra);
		
		for(i = 0; i < tam; i++){
			if(palavra[i] == copia[i])
				iguais++;
		}
		
		printf("\nORIGINAL: %s\nCOPIA: %s", palavra, copia);
		
		if(tam == iguais)
			printf("\n� pal�ndroma...\n");
		else
			printf("\nN�o � pal�ndroma...\n");
	*/
	
	// Solu��o 2.
	
	tam = strlen(palavra) - 1; 
	
	i = 0; 
	
	while (tam >= i) { 
		if(palavra[i] != palavra[tam])
			diferente++;
		i++;
		tam--;
	}
		
	if(diferente != 0)
		printf("\nN�o � pal�ndroma...\n");
	else
		printf("\n� pal�ndroma...\n");
	return 0;
} 
