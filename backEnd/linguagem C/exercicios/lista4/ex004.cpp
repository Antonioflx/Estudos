#include <stdio.h>
#include <stdlib.h>

/*
		ex004:
		4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
		diferentes. O vendedor recebe um sal�rio de R$1100,00 acrescido de 5% do valor total de suas
		vendas. O valor unit�rio dos objetos deve ser informado e armazenado em um vetor; a quantidade
		vendida de cada objeto deve ficar em outro vetor, mas na mesma posi��o. Crie um programa que
		receba os pre�os e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
		determine e mostre:
		
		a) A quantidade vendida, valor unit�rio e valor total de cada objeto. Ao final, dever�o ser mostrados
		o valor total das vendas e o valor da comiss�o que ser� paga ao vendedor.
		
		b) O valor do objeto mais vendido e sua posi��o no vetor (em caso de empates mostre todos
		empatados)
*/
int main () {

	// Variaveis
	
	
	int c,quant;
	float sal = 1100, acre = 5, valor_objeto[10], valorTotal;
	
	// Codigo
	
	printf("\n");
	for (c = 0; c < 10; c++)
	{
		printf("Valor do objeto %d: ", c);
		scanf("%f", &valor_objeto[c]);
	}
	
	printf("\n\nQuantos produtos foram vendidos?");
	printf("\nINFORME: ");
	scanf("%d", &quant);
	
	printf("\nQUANTIDADE: %d", quant);
	for (c = 0; c < quant; c++)
	{
		printf("\nValores: %.2f", valor_objeto[c]); 
		valorTotal += valor_objeto[c];
	}
	sal = sal + acre/100 * valorTotal;
	printf("\nValor TOTAL: %.2f", valorTotal);
	
	printf("\n\nCOMISSAO: %.2f", sal);
	return 0;
}
