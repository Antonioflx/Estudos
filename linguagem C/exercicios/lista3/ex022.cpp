#include <stdio.h>

/*
		22) Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metro e cresce 3
		cent�metros por ano. Construa um programa que calcule e imprima quantos anos ser�o necess�rios
		para que Z� seja maior que Chico.
*/
int main () {

	// Variaveis
	
	int tempC, tempZ, res;
	float alturaC = 1.5, alturaZ = 1.1;	
	// Codigo
	
	
	do 
	{
		alturaC += 0.02;
		tempC ++;
		
		alturaZ += 0.03;
		tempZ++;
	} while (alturaZ <= alturaC);
	
	printf("%d ANOS", tempZ);
	return 0;
}
