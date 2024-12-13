#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 218: Como escrever um arquivo bin�rio com a fun��o fwrite()?
		
		
		Modos de abertura de arquivos:
		// Acrescenta o b -> binario.
			wb -> Escrita // Se o arquivo n�o existe, ele cria.
			rb -> Leitura
			ab -> Anexar
			rb+ -> Leitura e Escrita
			wb+ -> Leitura e Escrita (Apaga o conte�do caso o arquivo exista)
			ab+ -> Leitura e Escrita (Adiciona ao final do arquivo)
	
	
		// Fun��es:
		fwrite() = f - > file ; write -> escrever == escrever no arquivo;
			Recebe 4 parametros:
				1) Recebe o endere�o de mem�ria -> Onde contem os dados que quero salvar (variavel)
				2) Tamanho do tipo de dado que quero escrever
				3) Quantas vezes iremos escrever essa variavel (tamanho), 1vez, 2 vezes,etc.
				4) Arquivo
				
*/

typedef struct{
	char nome[50];
	int dia,mes, ano;
} t_Contato;

void escrever(char arq[]) {
	t_Contato c;
	
	FILE *file = fopen(arq, "ab");
	
	if(file) {
		printf("\nDigite o nome e a data de nascimento -> dd/mm/aaaa: ");
		scanf("%49[^\n]%d%d%d", c.nome, &c.dia, &c.mes, &c.ano);	
		
		fwrite(&c, sizeof(t_Contato), 1, file);
		
		fclose(file);
	}else
		printf("\nN�o foi poss�vel abrir o arquivo!");
}

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// .txt -> texto
	// arquivo bin�rio -> .dat
	char arquivo[] = {"agenda.dat"};
	
	escrever(arquivo);
	return 0;
} 
