#include <stdio.h>
#include <stdlib.h>


/*
Calcular a Média da classe de N alunos

Inicalmente o programa deve receber a quantidade 
de alunos, depois para cada aluno, pedir a sua nota e
por fim, calcular a média da turma.

*/

int main(int argc, char *argv[]) {
	
	
	//Declaram as variaveis
	int nr_alunos = 0;
	float nota = 0.0f;
	float somatoria_notas = 0.0f;
	float media = 0.0f;
	
	printf("Digite a quantidade de alunos\n");
	scanf("%d", &nr_alunos);
	
	int i;
	for(i = 0; i < nr_alunos; i=i+1){
		printf("Digite a nota do aluno nr %d: ", i+1);
		scanf("%f", &nota);
		somatoria_notas = somatoria_notas + nota;
	}
	
	//Calcular a media, cuidado na divisao por zero
	if(nr_alunos > 0) {
		media = somatoria_notas / nr_alunos;
	}
	
	printf("Media eh: %f", media);
	
	
	return 0;
	
}
