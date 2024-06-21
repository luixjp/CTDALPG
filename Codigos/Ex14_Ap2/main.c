#include <stdio.h>
#include <stdlib.h>

/* 

14. Faça um programa em C para guardar a agenda telefônica de um
determinado usuário. Inicialmente o programa deverá ler dois vetores
com dez posições cada, onde o primeiro corresponde ao nome da pessoa e o
segundo corresponde ao telefone da pessoa. Após, o programa deverá
ordenar as informações em ordem alfabética dos nomes das pessoas. O
programa deverá permite que o usuário escolha entre a busca individual
de telefones, informando o nome da pessoa, um relatório com todos os
nomes e respectivos telefones ou sair do programa.

 */

int main(int argc, char *argv[]) {
	
	char caracter0 = 'l';
	char caracter1 = 'u';
	char caracter2 = 'i';
	char caracter3 = 's';
	
	printf("%c", caracter0);
	printf("%c", caracter1);
	printf("%c", caracter2);
	printf("%c", caracter3);
	
	printf("\n");
	
	char nome[4] = {'l','u','i','s','\0'};
	printf("%s", nome);
	
	printf("\n");
	
	char nome_usuario[20];
	printf("Digite o seu primeiro nome:\n");
	scanf("%s", nome_usuario);
	
	printf("Seu nome eh: %s", nome_usuario);
	
	printf("\n");
	char nome_ex14[10][20];
	
	int i;
	for(i=0; i<10;i++) {
		printf("Digite o seu primeiro nome usuario:\n");
		scanf("%s", nome_ex14[i]);
	}
	
	for(i=0; i<10;i++) {
		//printf("Seu do usuario %d eh: %s",i+1, nome_ex14[i]);
		//printf("\n");
		
	}
}
