#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 208: Como escrever um arquivo texto com a fun��o fputc?
		
		
		Modos de abertura de arquivos:
			w -> Escrita // Se o arquivo n�o existe, ele cria.
			r -> Leitura
			a -> Anexar
			r+ -> Leitura e Escrita
			w+ -> Leitura e Escrita (Apaga o conte�do caso o arquivo exista)
			a+ -> Leitura e Escrita (Adiciona ao final do arquivo)
	
	
		// Fun��es:
		fopen() = f - > file ; open -> abrir == abrir um arquivo;
			Recebe 2 parametros:
				1) Nome do arquivo que eu quero abrir; Ele ser� criado na pasta do projeto. // Posso informar um diret�rio.
				2) Uma das letras de modo de abertura.
				
		fputc() = f -> file ; put -> colocar ; c -> caractere == colocar caractere no arquivo.
			Recebe 2 parametros:
				1) O caractere que eu quero escrever
				2) E recebe o ponteiro do arquivo onde eu quero escrever.
				
		fclose() = f -> file ; close -> fechar == fechar arquivo
			Importante para evitar arquivos corrompidos.
			Fechar ap�s fazer todo o processo
			Recebe 1 parametro:
				1) O arquivo.
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// tipo ponteiro FILE (Arquivo);
	
	FILE *file;
	char letra;
	
	file = fopen("conto.txt", "w"); // w -> escrever
	
	if(file) {
		printf("\nDigite um texto e pressione ENTER ao finalizar!\n");
		printf("ESCRITA: ");
		scanf("%c", &letra); // ler o caractere digitado pelo usu
		// fazer uma repeti��o para ler todos os caracteres at� o enter '\n';
		while ( letra != '\n') {
			fputc(letra , file);
			scanf("%c", &letra);
		}
		// fechar arquivo com fclose();
		fclose(file);
	}
		
	else
		printf("\n\t--> ERRO\n");
	return 0;
} 
