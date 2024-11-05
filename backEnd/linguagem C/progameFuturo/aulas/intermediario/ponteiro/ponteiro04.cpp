#include <stdio.h>
#include <locale.h>
#include <string.h>

/*
		Aula 187: Como passar um ponteiro como par�metro?
	
*/

// Procedimento para imprimir
void imprimir (int num, int *p) {
	
	printf("\n\t[1 PROCEDIMENTO:]");
	printf("\nIdade no Procedimento: %d\n", num);
	printf("Endere�o no Procedimento: %p", p);
	
	// Atrav�s do endere�o de mem�ria, eu consigo alterar o valor da vari�vel;
	*p = 15; 
}

void imprimir2(int *num2) {
	
	
	printf("\n\t[2 PROCEDIMENTO:]");
	printf("\nIdade no Procedimento: %d\n", *num2);
	printf("Endere�o no Procedimento: %p", num2);
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
		
	int idade = 35;
	int idade2 = 50;
	int *pIdade;
	
	pIdade = &idade;
	 
	printf("\n\nANTES DO PROCEDIMENTO: "); 
	printf("\nIdade no Main : %d\n", idade);
	printf("Endere�o no Main: %p\n", pIdade);
	imprimir(idade, pIdade);
	
	// O endere�o de mem�ria � o mesmo de Idade (Main) e num (Imprimir)
	printf("\n\nDEPOIS DO PROCEDIMENTO: "); 
	printf("\nIdade no Main : %d\n", idade);
	printf("Endere�o no Main: %p\n", pIdade);
	
	
	// 2 procedimento
	
	imprimir2(&idade2);
	return 0;
} 
