#include <stdio.h>
#include <stdlib.h>


/*
As ma�as custam R$ 1,30 cada, se forem compradas 
menos de uma d�zia e R$ 1,00 se forem compradas pelo 
menos 12. Escreva um algoritmo e o programa em C que
leia o n�mero de ma�as compradas, calcule e escreva o
 custo total da compra.
*/

int main(int argc, char *argv[]) {
	
	//Variaveis
	int qtd_macas = 0;
	float custo_total = 0.0f;
	
	printf("Digite quantas macas voc� deseja comprar\n");
	scanf("%d", &qtd_macas);
	
	if(qtd_macas >= 12){
		custo_total = qtd_macas * 1.00;
	}
	else {
		custo_total = qtd_macas * 1.30;
	}
	
	printf("Custo total: %f", custo_total);
	
	return 0;
}
