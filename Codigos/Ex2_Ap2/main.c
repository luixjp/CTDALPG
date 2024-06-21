#include <stdio.h>
#include <stdlib.h>

/* 

2. Escreva um programa C que utilize um vetor para armazenar a
nota de 10 alunos de uma disciplina, calcule e imprima a média, e
determine o número de alunos que tiveram nota superior à média.

*/

int main(int argc, char *argv[]) {
	
	int qtd_alunos = 10;
	float vetor_notas[qtd_alunos];
	float somatoria_nota = 0.0f;
	float media = 0.0f;
	int qtd_alunos_acima_da_media = 0;
	
	//Loop para receber as notas e já somar as notas dos alunos
	int i;
	for(i = 0; i < qtd_alunos; i++) {
		
		printf("Digite a nota do(a) aluno(a) # %d: ", i+1);
		scanf("%f", &vetor_notas[i]);
		somatoria_nota = somatoria_nota + vetor_notas[i];		
	}
	
	//Calculo da média
	media = somatoria_nota / qtd_alunos;
	printf("A media da turma e: %2.2f\n", media);
	
	//Buscar a qtd de alunos com notas acima da media
	for(i=0; i < qtd_alunos; i++) {
		if(vetor_notas[i] > media) {
			qtd_alunos_acima_da_media++;
		}
	}
	
	printf("A qtd de alunos(as) com notas acima da media e: %d", qtd_alunos_acima_da_media);
		
	return 0;
}
