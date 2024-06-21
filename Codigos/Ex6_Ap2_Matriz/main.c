#include <stdio.h>
#include <stdlib.h>

/* 
A matriz a seguir contém exemplos de vários itens que estão
estocados em diversos armazéns de uma companhia. É fornecido,
também, um vetor com o custo de cada um dos produtos armazenados.

			Produto 1 | Produto 2 | Produto 3  
Armazem 1 		12			37			37
Armazem 2		14			42			31
Armazem 3		20			22			25

Custo (R$)		26	  | 	40	  |		30

Fazer um programa que:
a. Leia o estoque inicial e o custo;
b. Determine e imprima quantos itens estao armazenados em
cada armazem;
c. O custo total de:
 c.1 - Cada produto em cada armazem;
 c.2 - Estoque em cada armazem.

*/

int main(int argc, char *argv[]) {
	
	int matrix[3][3];
	float custo[3];
	
	//Lendo o estoque inicial
	int i, j;
	for(i=0; i<3; i++) { //linhas da matriz
	
		for(j=0;j<3;j++) { //colunas da matriz
			printf("Digite o estoque do Arm[%d], do Prod[%d]: ", i+1, j+1);
			scanf("%d", &matrix[i][j]);			
			
		}
	
	}
	
	//Lendo o custo
	int c;
	for(c=0; c<3;c++) {
		printf("Digite o valor do custo do produto [%d]: ", c+1);
		scanf("%f", &custo[c]);
		
	}
	
	//Determinar e imprimir qts itens armazendos em cada armazém
	int qtd_itens = 0;
	float custo_total_ia = 0.0f; //ia = item armazem
	float custo_total_est = 0.0f; // Custo do Estoque de cada armazem
	for(i=0; i<3;i++) { //linhas da matriz
	
		for(j=0;j<3;j++) { //colinas da matriz
			qtd_itens += matrix[i][j];
			custo_total_ia =  matrix[i][j] * custo[j];
			printf("Custo do produto [%d] no Arm[%d] eh: %f\n", 
													j+1, i+1, custo_total_ia);
		
			custo_total_est += custo_total_ia;
		}
		
		printf("Custo do Estoque do Arm[%d] eh: %f\n", i+1, custo_total_est);
		//Importante zerar o cuto do estoque total do armazem
		custo_total_est = 0;		
		
		//Imprimir qtd de itens do armazem (linha)
		printf("Qts de itens do Arm[%d] eh: %d\n", i+1, qtd_itens);		
		
		//Importante zerar a qtd de itens para iniciar um nova linha (armazem)
		qtd_itens = 0;
	}
	
	return 0;
}
