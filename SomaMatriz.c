#include <stdlib.h>
#include <stdio.h>
#define L 3
#define C 3

void lerMatriz(float [L][C]);
void exibeMatriz(float [L][C]);
float somaElementosMatriz(float[L][C]);

int main(int argc, char* argv){
	
	float matriz[L][C], soma;
	lerMatriz(matriz);
	system("cls");
	exibeMatriz(matriz);
	system("pause");
	system("cls");
	soma = somaElementosMatriz(matriz);
	printf("A soma dos elementos eh: %f", soma);
}

void lerMatriz(float matriz[L][C]){
	
	int linha, coluna;
	
	for(linha = 0; linha < L; linha++){
		for (coluna = 0; coluna < C; coluna++){
			printf("Informe o elemento [%d][%d]: ",linha, coluna);
			scanf("%f",&matriz[linha][coluna]);
		}
	}
}

void exibeMatriz(float matriz[L][C]){
	
	int linha, coluna;
	
	for(linha = 0; linha < L; linha++){
		for (coluna = 0; coluna < C; coluna++){
			printf("%f  ",matriz[linha][coluna]);
		}
		printf("\n");
	}
}

float somaElementosMatriz(float matriz[L][C]){
	
	int linha, coluna;
	float soma = 0;
	
	for(linha = 0; linha < L; linha++){
		for (coluna = 0; coluna < C; coluna++){
			soma = soma + matriz[linha][coluna];
		}
	}
	return soma;
}
