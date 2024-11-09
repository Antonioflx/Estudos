#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
		Aula 209: Como ler em arquivo texto com a fun��o fgetc?
		
		
		Modos de abertura de arquivos:
			w -> Escrita // Se o arquivo n�o existe, ele cria.
			r -> Leitura
			a -> Anexar
			r+ -> Leitura e Escrita
			w+ -> Leitura e Escrita (Apaga o conte�do caso o arquivo exista)
			a+ -> Leitura e Escrita (Adiciona ao final do arquivo)
	
	
		// Fun��es:
				
		rewind() = re -> resetar ou reposicionar ; wind -> ato de voltar
						 == reposicionar o ponteiro de leitura/escrita de um arquivo para o in�cio.
			Faz com que o ponteiro volte para o in�cio do arquivo, e possamos ler o conte�do do mesmo.
			Recebe 1 parametro:
				1) O arquivo.
				
		fgetc() = f -> file ; get -> pegar -> c -> caractere == pegar caractere do arquivo.
			Recebe 1 parametro:
				1) O arquivo.
			Retornar um caractere.
			
		feof() = f -> file ; eof -> end of file == final do arquivo
			Recebe 1 parametro:
				1) O arquivo.
				
			PS: EOF -> � uma constante (Escreve em MAIUSCULO) da biblioteca stdio.h
					Ela indica o fim do arquivo. Valor -1 for fim de arquivo.
*/

int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	// tipo ponteiro FILE (Arquivo);
	
	FILE *file;
	char letra;
	
	file = fopen("conto.txt", "w+"); // Escrever e ler.
	
	if(file) {
		printf("\nDigite um texto e pressione ENTER ao finalizar!\n");
		printf("ESCRITA: ");
		scanf("%c", &letra); // ler o caractere digitado pelo usu
		// fazer uma repeti��o para ler todos os caracteres at� o enter '\n';
		while ( letra != '\n') {
			fputc(letra , file); // Sempre aponta para o final do texto
			scanf("%c", &letra);
		}
		
		// Para ler o conte�do do texto, eu preciso voltar para o in�cio.
		// utiliza a fun��o rewind();
		rewind(file); 
		
		
		printf("\n\tTexto lido do arquivo:\n");
		// Fazer um loop at� o fim -> utilizar a fun��o feof();
		
		// feof() -> retorna true, quando chega no final, ent�o precisamos utilizar o operador !
//		while(!feof(file)) {
//			letra = fgetc(file); // atribuir para letra e imprimir
//			printf("%c", letra);
//		}
	
	
		// Fazemos a atribui��o e comparamos com o EOF -> O qual tem o valor -1.
		// Entao quando letra == -1 n�o ser� diferente de EOF.
		while((letra = fgetc(file)) != EOF)
			printf("%c", letra);
		
		// fechar arquivo com fclose();
		fclose(file);
	}
	else
		printf("\n\t--> ERRO\n");
	return 0;
} 
