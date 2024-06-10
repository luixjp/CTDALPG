#include <stdio.h>
#include <stdlib.h>

/*
Programa para Calcular a Média da classe de N alunos

Inicialmente o programa deve receber a quantidade 
de alunos, depois para cada aluno, pedir a sua nota e
por fim, calcular a média da turma.

*/

int main(int argc, char *argv[]) {

	//Declarando as variaveis
	int qtd_alunos = 0;
	float nota_aluno = 0.0f;
	float somatoria_notas = 0.0f;
	float media = 0.0f;
	
	printf("Digite a quantidade de alunos\n");
	scanf("%d", &qtd_alunos);
	
	int i;
	for(i=0; i < qtd_alunos; i=i+1) {
		printf("Digite a nota do aluno [%d]: ", i+1);
		scanf("%f", &nota_aluno);
		somatoria_notas = somatoria_notas + nota_aluno;
	}
	
	if(qtd_alunos > 0) {
		media = somatoria_notas / qtd_alunos;
	}
		
	printf("A media eh: %f\n", media);
	
	system("pause");
	return 0;
}
