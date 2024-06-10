#include <stdio.h>
#include <stdlib.h>

/*
As maças custam R$ 1,30 cada, se forem compradas 
menos de uma dúzia e R$ 1,00 se forem compradas pelo 
menos 12. Escreva um algoritmo e o programa em C que
leia o número de maças compradas, calcule e escreva o
 custo total da compra.
*/

int main(int argc, char *argv[]) {

	//Variaveis
	int qtd_macas = 0;
	float custo_total = 0.0f;
	
	printf("Digite a quantidade de macas: ");
	scanf("%d", &qtd_macas);
	
	if(qtd_macas >= 12){
		//Valor da maça é 1,00
		custo_total = qtd_macas * 1.00;
	}
	else {
		//Valor da maça é 1,30
		custo_total = qtd_macas * 1.30;
	}
	
	printf("Custo total: %f", custo_total);

	system("pause");
	return 0;
}
