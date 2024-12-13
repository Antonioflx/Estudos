#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>


/*
	AULA 220: AGENDA COM BIN�RIO
*/

typedef struct {
	char nome[50];
	int dia, mes, ano;
}t_Contato;


// imprimir a interface e pedir os dados.
void imprimir(t_Contato **contato, int quant) {
	
	int i;
	
	printf("\n\t\tLista de Contatos:\n");
	printf("\t---------------------------------------\n");
	for(i = 0; i < quant; i++) {
		printf("\t%d Contato = %2d/%2d/%4d\t%s\n", 
				i + 1,
				contato[i]->dia, contato[i]->mes, contato[i]->ano, contato[i]->nome	
		);
	}
	printf("\t---------------------------------------\n");
}

// cadastrar o contato
int cadastrarContato(t_Contato **contato, int quant, int tam) {
	
	// fazer a verifica??o se quantidade ? menor que o tamanho limite do vetor
	if(quant < tam) {
		t_Contato *novo = (t_Contato*)malloc(sizeof(t_Contato));
		
		printf("\nDigite o nome do contato: ");
		scanf("%50[^\n]", novo->nome);
		printf("\nDigite a data de anivers?rio [Dia, Mes, Ano]: ");
		scanf("%d%d%d", &novo->dia, &novo->mes, &novo->ano);
		getchar();
		contato[quant] = novo;
		return 1;
	}
	else {
		printf("\n\tImpossivel novo cadastro. Vetor cheio!\n");
		return 0;
	}
	
}

void alterarContato(t_Contato **contato, int quant) {
	
	int id;
	
	imprimir(contato, quant);
	
	printf("\n\tDigite o c�digo do contato que deseja alterar: ");
	scanf("%d", &id);
	getchar();
	id--; // decrementar
	
	while(id < 0 && id > quant) {
		printf("\n\tDigite um c�digo v�lido: ");
		printf("\n\tDigite o c�digo do contato que deseja alterar: ");
		scanf("%d", &id);
		getchar();
		id--; // decrementar
	}
	
	t_Contato *novo = (t_Contato*)malloc(sizeof(t_Contato));
	printf("\nDigite o nome do contato: ");
	scanf("%50[^\n]", novo->nome);
	printf("\nDigite a data de anivers�rio [Dia, Mes, Ano]: ");
	scanf("%d%d%d", &novo->dia, &novo->mes, &novo->ano);
	getchar();
	contato[id] = novo;

}

void saveInArq(t_Contato **contato, int quant, char f[]) {
	
	FILE *file = fopen(f, "w");
	int i;
	
	if(file) {
		fprintf(file, "Quantidade: %d", quant);
		fprintf(file, "\n\n\tLista de Contatos:\n\n");
		for(i = 0; i < quant; i++) {
			fputs(contato[i]->nome, file);
			fputc('\t', file);
			fprintf(file, "%d %d %d\n", contato[i]->dia, contato[i]->mes, contato[i]->ano);
		}
		fclose(file);
		
	}
	else 
		printf("\n\t[ERROR]\n");
	
	
}

int lerArq(t_Contato **contato, char f[]) {
	FILE *file = fopen(f, "r");
	int quant = 0, i;
	// criar o novo contato para salvar na funcao fgets()
	t_Contato *novo = (t_Contato*)malloc(sizeof(t_Contato));
	
	
	if(file) {
		// descobrir quantas pessoas tem no arquivo.
		fscanf(file, "%d\n", &quant);
		for(i = 0; i < quant; i++) {
//			fgets(novo->nome, 50, file);
			fscanf(file, "%50[^\n]", novo->nome);
			fscanf(file, "%d %d %d\n", &novo->dia, &novo->mes, &novo->ano);
			contato[i] = novo;
			
			// alocar outra regiao de memoria para n perder os dados
			novo = (t_Contato*)malloc(sizeof(t_Contato));
		}
		fclose(file);
	}
	else
		printf("\n\t[ERROR]\n");
		
	return quant;
	
}

void salvarB(char arq[], t_Contato **contato, int quant) {

	FILE *file = fopen(arq, "wb");

	if(file) {
		for(int i = 0; i < quant; i++)
			fwrite(contato[i], sizeof(t_Contato), 1, file);	
		fclose(file);
	} else	
		printf("\nN�o foi poss�vel abrir o arquivo\n");
}

int lerB(char arquivo[], t_Contato **contato) {

	int quantidade = 0;
	t_Contato *novo = (t_Contato*)malloc(sizeof(t_Contato));

	FILE *file = fopen(arquivo, "rb");

	if(file) {
		while(fread(novo, sizeof(t_Contato), 1, file)) {
			contato[quantidade] = novo;
			quantidade++;
			novo = (t_Contato*)malloc(sizeof(t_Contato));
		}
		fclose(file);
	} else
		printf("\nN�o foi poss�vel abrir o arquivo\n");

	return quantidade;
}


int main() {
	// Definindo a lingua
	setlocale(0, "Portuguese");
	
	t_Contato *agenda[50];
	int opcao, tam = 50, quant = 0;
	char arquivo[] = {"agenda.txt"};
	char arquivo2[] = {"agenda.dat"};
	
	do {
		printf("\n\t[0] -> Sair\n\t[1] -> Cadastrar\n\t[2] -> Altera\n\t[3] -> Imprimir\n\t[4] -> Salvar no arquivo\n\t[5] -> Ler arquivo\n\t[6] -> SalvarB\n\t[7] -> LerB\n");
		printf("\nSelecione: ");
		scanf("%d", &opcao);
		getchar();
		
		while(opcao == 2 && quant == 0) {
			printf("\n\nN�o h� contatos para alterar:\nSelecione um n�mero valido!\n");
			printf("\n\t[0] -> Sair\n\t[1] -> Cadastrar\n\t[2] -> Altera\n\t[3] -> Imprimir\n\t[4] -> Salvar no arquivo\n\t[5] -> Ler arquivo\n\t[6] -> SalvarB\n\t[7] -> LerB\n");
			printf("\nSelecione: ");
			scanf("%d", &opcao);
			getchar();
		}
		
		switch(opcao) {
			
			case 0 :
				break;
				
			case 1 :
				quant += cadastrarContato(agenda, quant, tam);
				system("cls");
				break;
			
			case 2 :
				system("cls");
				alterarContato(agenda, quant);
				break;
			
			case 3 :
				system("cls");
				imprimir(agenda, quant);
				break;
			
			case 4:
				saveInArq(agenda, quant, arquivo);	
				break;
			
			case 5:
				system("cls");
				lerArq(agenda, arquivo);
				printf("\nSelecione a op��o de imprimir para ver os dados:\n");
				break;

			case 6:
				salvarB(arquivo2, agenda, quant);
				break;

			case 7:
				quant = lerB(arquivo2, agenda);
				break;
				
			default : printf("\n\n\tValor inv�lido!\n"); break;
		}
		
	} while(opcao);
	// colocar em arquivos
	return 0;
} 

