#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*
	8. Crie uma fun��o em linguagem C chamado Dado() que retorna, atrav�s de sorteio, um n�mero de 1 at� 6.
*/


int dado(int num) {
	
	srand(time(NULL));
	
	num = rand() % 5 + 1;
	
	return num;

}



int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// Variaveis
	int num1;
	
	printf("Vamos jogar o DADO [1-6]. ");
	printf("\nDado foi jogado...\n");
	printf("RESULTADO: %d", dado(num1));
	
	
	return 0;
} 
