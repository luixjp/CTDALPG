#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void retorna(int a, int v[3]) {

	a = 7;

	v[0] = 1;
	v[1] = 3;
	v[2] = 5;	
}

int main ()
{
	int a = 5;
	int vet[3] = {0, 2, 4};

	printf("Valor de a antes de funcao eh: %d\n", a);

	int i;
	for(i =0; i<3;i++) {
		printf("[Vetor Antes Funcao] Pos %d valor: %d\n", i, vet[i]);
	}

	retorna(a, vet);

	printf("Valor de a depois de funcao eh: %d\n", a);
	
	for(i =0; i<3;i++) {
		printf("[Vetor Depois Funcao]Pos %d valor: %d\n", i, vet[i]);
	}

	return 0;

}