#include <stdio.h>
#include <stdlib.h>

/* 
1. Faça um programa em C que carregue uma matriz 4x3 com números
inteiros, calcule e mostre a quantidade de elementos pares entre esses
elementos.
*/

int main(int argc, char *argv[]) {
	
	int mat[4][3];
	int qtd_pares = 0;
	
	int i, j;
	for(i=0; i<4; i++) { //for para as linhas
	
		for(j=0; j<3; j++) { //for para as colunas
			printf("Digite o valor do elemento [%d][%d]: ", i, j);
			scanf("%d", &mat[i][j]);
			
			if(mat[i][j]%2 == 0) { //Par
				qtd_pares++;
			}
			
		}		
	}
	
	//Novo laço para exibir os valores/elementos da matriz
	for(i=0; i<4; i++) { //for para as linhas
	
		for(j=0; j<3; j++) { //for para as colunas
		
			printf("%d ", mat[i][j]);
		
		}
		printf("\n");
	}
	
	printf("\nA qtd de elementos pares eh: %d\n", qtd_pares);
	
	
	
}
