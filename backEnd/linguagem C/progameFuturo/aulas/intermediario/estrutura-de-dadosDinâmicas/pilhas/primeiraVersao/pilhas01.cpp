#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	Estrutura de dados mais conhecidas:
		Cada estrutura tem uma finalidade espec�fica.
	
		1) Pilhas -> Inserir na pilha e remover da pilha (apenas no topo)
			A pilha ser� composta por v�rios n�s.
				Toda chamada recursiva faz uma opera��o push.
			
			
			A parte da opera��o � feita no topo da pilha.
				O �ltimo a entrar � o primeiro a sair.
				(LIFO) -> Last - in - First - out
				
			Pode fazer duas opera��es:
				1) Push -> empilhar
					O in�cio � nulo, pois n�o temos nada ali.
						NULL 
					
					1. Inserir 
						Dado1
						|
						Qualquer dado.
						|
						PONTEIRO1 -> aponta para o n� anterior
						(N�) -> cada n� tem um campo de informa��o.
						|
						NULL
						
					2. Inserir outro
						
						Dado2
						|
						Qualquer Dado
						|
						Ponteiro2 (N�) -:> Aponta para o n� anterior (dado 1, ponteiro 1)
						|
						Dado1
						|
						Qualquer Dado
						|
						Ponteiro1 (N�)
						|
						NULL
					
					Assim por diante.		
				
				2) Pop -> desempilhar -> sempre acontece no topo.
					Possui tr�s passos:
					
					1 passo) Criar um ponteiro auxiliar que vai apontar para o topo
					da pilha
					
					2 passo) O ponteiro topo precisa apontar para o ponteiro seguinte.
					
					3 passo) Utilizar o free() -> Liberar a mem�ria.
					
				PS: NO computador, os n�s podem estar espalhados na mem�ria.
					
		
		Como criar 
		
		typedef struct no {
			int dado;
			struct no *proximo; (ponteiro -> para apontar para o n� anterior)
		} t_No;

*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	

	return 0;
} 
