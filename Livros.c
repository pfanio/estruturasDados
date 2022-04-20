#include <stdio.h>
#include <stdlib.h>

#define QTD 4
#define TITULO 40
#define AUTOR 20

typedef struct {
	char titulo[TITULO];
	char autor[AUTOR];
	float numeroDoCatalogo;
	int anoDePublicacao;
	int numeroDaCopia;
}LIVRO;

void cadastraLivros(LIVRO[QTD]);
void exibeLivros(LIVRO[QTD]);

int main(int argc, char* argv){
	
	LIVRO biblioteca[QTD];
	
	cadastraLivros(biblioteca);
	exibeLivros(biblioteca);
		
}

void cadastraLivros(LIVRO biblioteca[QTD]){
	
	int indice;
	
	for (indice = 0; indice < QTD; indice++){
		printf("Informe o titulo do livro %d: ", indice + 1);
		gets(biblioteca[indice].titulo);	
		
		printf("Informe o autor do livro %d: ", indice + 1);
		gets(biblioteca[indice].autor);	
		
		printf("Informe o numero do catalogo de %s: ", biblioteca[indice].titulo);
		scanf("%f", &biblioteca[indice].numeroDoCatalogo);	
		
		printf("Informe o ano de publicacao de %s: ", biblioteca[indice].titulo);
		scanf("%d", &biblioteca[indice].anoDePublicacao);
		
		printf("Informe o numero da copia de %s: ", biblioteca[indice].titulo);
		scanf("%d", &biblioteca[indice].numeroDaCopia);
		
		fflush(stdin);
		system("cls");
	}
}


void exibeLivros(LIVRO biblioteca[QTD]){
	
	int indice;
	
	for (indice = 0; indice < QTD; indice++){
		printf("Titulo: %s \n", biblioteca[indice].titulo);
		printf("Autor: %s \n", biblioteca[indice].autor);		
		printf("Numero do catalogo: %f \n", biblioteca[indice].numeroDoCatalogo);				
		printf("Ano de publicacao: %d \n", biblioteca[indice].anoDePublicacao);				
		printf("Numero da copia: %d \n", biblioteca[indice].numeroDaCopia);
				
		printf("########################################\n");
	}
}

