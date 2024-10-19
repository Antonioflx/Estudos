#include <stdio.h>

/*
		26) Escreva um programa para ler as notas da primeira e da segunda avalia��o de um aluno. Calcule
		e imprima a m�dia semestral. O programa dever� aceitar apenas notas v�lidas no intervalo [0,10].
		Cada nota deve ser validada separadamente. Ao final, deve ser impressa a mensagem �novo
		calculo? (1-sim 2-nao)�, solicitando ao usu�rio que informe um c�digo (1 ou 2), indicando se ele
		deseja ou n�o executar o programa novamente. Se for informado o c�digo 1, deve ser repetida a
		execu��o de todo o programa para permitir um novo c�lculo, se for informado o c�digo 2 o
		programa deve ser encerrado.
*/
int main () {

	// Variaveis
	
	int res, cont;
	float nota1, nota2, media;
	
	// Codigo
	
	// Ler a nota1 e validar no intervalo [0,10].
	
	do 
	{
		printf("\nPRIMEIRA nota: ");
		scanf("%f", &nota1);
		
		while (nota1 < 0 || nota1 > 10)
		{
			printf("\nNOTA INVALIDA!");
			printf("\nPRIMEIRA nota: ");
			scanf("%f", &nota1);
		}
	
		// Ler a nota2 e validar no intervalo [0,10].
		printf("\n\nSEGUNDA nota: ");
		scanf("%f", &nota2);
		
		while (nota2 < 0 || nota2 > 10)
		{
			printf("\nNOTA INVALIDA!");
			printf("\nSEGUNDA nota: ");
			scanf("%f", &nota2);
		}
		
		media = (nota1 + nota2) / 2;
		
		printf("MEDIA: %.2f", media);
		
		printf("\n\nDeseja continuar?");
		printf("\n[1] - sim\n[2]- nao");
		printf("\nINFORME: ");
		scanf("%d", &res);
	
	} while (res == 1);
	
	printf("\nOBRIGADO!");
	
	
	return 0;
}
