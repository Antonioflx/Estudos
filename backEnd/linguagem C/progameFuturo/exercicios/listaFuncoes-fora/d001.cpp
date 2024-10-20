#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*
	Desafio 1: Programe um aplicativo em C que acha todos os n�meros primos at� 1000
	N�mero primo � aquele que � divis�vel somente por 1 e por ele mesmo.
	
	
*/




int ePrimo(int n) {
		
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return 0;
	}
	
	return 1;
}


int main() {	
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int i;
	
	for (i = 2; i <= 20; i++)
		if(ePrimo(i)) {
			printf("O num %d = � PRIMO\n", i);
		} else {
			printf("O num %d = Nao � PRIMO\n", i);
		}
	
	return 0;
} 
