#include <stdio.h>


/* 
					Aula 30
			tabela ascii e acentua��o
			1 byte (8 bits) --> -128 at� 127
			unsigned 1 byte -> 0 at� 255
			
			9 � o caractere de tabula��o \t.
			10 � o caractere de nova linha \n (enter).
			65 � a letra A mai�sucla.
			66 � a letra B mai�scula.
			90 � a letra Z mai�scula.
			
			1� = setelocale(LC_ALL, NULL); // padr�o da Linguagem C
			2� = setelocale(LC_ALL , ""); // padr�o do sistema operacional
			3� = setelocale(LC_ALL, "Portuguese"); // portugu�s brasileiro
*/

int main() {
	
	printf("%c", 254);
	return 0;
}
