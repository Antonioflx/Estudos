#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include  "header/pilha.h"
/*
		Aula 230: Como criar arquivos de cabe�alho .h?	-> linkagem com algumas fun��es j� prontas.	
		// Processo de modulariza��o
		criar fun��es para dividir o progama em m�dulos indepedentes.
*/

int fatorial(int num) {
	
	t_Pilha p; // criar pilha para empilhar o numero at� chegar em 1
	criarPilha(&p);
	
	t_No *remover; // criar o no para desempilhar e fazer o fatorial
	
	
	// fazer o loop para empilhar cada num at� o 1.
	while(num > 1) {
		empilhar(&p, num); // empilha cada numero at� chegar no 1.
		num--;
	}
	
	
	// ex = 3; -> imprimir 2 dps o 3.
	imprimirPilha(&p);
	
	// loop para autalizar os valores de acordo com o desempilhamento do num
	
	while(p.topo) {
		remover = desempilhar(&p);
		num = num * remover->numero;
		
		free(remover);
	} 
	
	return num;
	
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	int num;
	printf("\n\nDigite um n�mero: ");
	scanf("%d", &num);
		
	printf("\t\n\nFat de %d! = %d", num, fatorial(num));
	return 0;
} 
