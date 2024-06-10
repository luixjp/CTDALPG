#include <stdio.h>
#include <stdlib.h>

/*

Faça um algoritmo e o programa em C que leia uma quantidade
indeterminada de números positivos e conte quantos deles estão nos seguintes
intervalos: [0 25], [26 50], [51 75] e [76 100]. A entrada dos dados deverá
terminar quando for lido um número negativo.

*/
int main(int argc, char *argv[]) {
	
	int x = 0;
	int qtd_0_25 = 0;
	int qtd_26_50 = 0;
	int qtd_51_75 = 0;
	int qtd_76_100 = 0;
	
	do {
		printf("Digite um numero inteiro: ");
		scanf("%d", &x);
		
		if(x >= 0 && x <= 25) {
			qtd_0_25++;
		}
		else if(x >= 26 && x <= 50) {
			qtd_26_50++;
		}
		else if(x >= 51 && x <= 75) {
			qtd_51_75++;
		}
		else if(x >= 76 && x <= 100 ) {
			qtd_76_100++;
		}
		else {
			printf("\nNumero fora dos intervalos [0 25], [26 50], [51 75] e [76 100]\n");
		}
		
	}	
	while( x >= 0);
	
	printf("\nQtd entre [0 25] eh: %d", qtd_0_25);
	printf("\nQtd entre [26 50] eh: %d", qtd_26_50);
	printf("\nQtd entre [51 75] eh: %d", qtd_51_75);
	printf("\nQtd entre [76 100] eh: %d", qtd_76_100);
	
	return 0;
}
