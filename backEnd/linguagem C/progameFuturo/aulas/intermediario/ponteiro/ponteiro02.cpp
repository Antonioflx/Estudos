#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 185: De quanta mem�ria um ponteiro precisa?
	
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
		
	int *p;
	
	// Codigo
	printf("\nTamanho: %d\n", sizeof(p));
	
	/*
		O ponteiro tem tamanho 8 bytes, porque � o necess�rio para armazenar qualquer endere�o
		de mem�ria em sistemas 64bits.
		
		O valor est� diretamente relacionado com a 
		quantidade de mem�ria que tenho na minha m�quina
		
	*/
	
	return 0;
} 
