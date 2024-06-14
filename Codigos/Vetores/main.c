#include <stdio.h>
#include <stdlib.h>

/*
	Programa em C para compreender Vetores em memória.
*/


int main(int argc, char *argv[]) {
	
	
	//Vetor já inicializado com valores
	int vetor[] = {0, 1, 2, 3, 4, 5, 6};
	
	//A função sizeof retorna o tamanho da variável em quantidade de bytes
	//pesquisem mais sobre a função sizeof
	//Imprimir o tamanho de um item (item de index 0) do vetor
	printf("Tamanho do item do vetor: %d\n", (int) sizeof(vetor[0]));
	
	//Imprimir o tamanho de todo o vetor
	printf("Tamanho do vetor: %d\n", (int) sizeof(vetor));
	
	//Imprimir a largura (quantidade de itens) do vetor
	printf("Largura do vetor: %d\n", (int) sizeof(vetor)/sizeof(vetor[0]));
	
	/*
	
	Saída:
	
	Tamanho do item do vetor: 4
	Tamanho do vetor: 28
	Largura do vetor: 7

	--------------------------------
	
	Explicação:
	
	O tamanho do item do vetor é 1 inteiro (4 bytes em C na arquitetura do computador utilizado).
	O tamanho do vetor são 7 inteiros (28 bytes = 4 bytes * 7 inteiros)
	A largura ou tamanho do vetor é de 7 itens (do 0 até o 6).
	
	
	
	*/
	
	return 0;
}
