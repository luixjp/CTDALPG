#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int nr_alunos = 5;
	float nota = 0.0f;
	float soma_notas_aluno = 0.0f;
	float media_aluno = 0.0f;
	int qtd_alunos_aprov = 0;
	int qtd_alunos_reprov = 0;
	int qtd_alunos_exame = 0;	
	float soma_medias_alunos = 0.0f;
	float media_turma = 0.0f;
	
	//Laço para cada aluno
	int i;
	for(i=0; i < nr_alunos ; i++){
		
		//Laço para cada Nota de cada Aluno
		int j;
		for(j=0; j < 2; j++){
			
			printf("Digite a nota [%d] do aluno(a) [%d]: ", j+1, i+1);
			scanf("%f", &nota);
			soma_notas_aluno = soma_notas_aluno + nota;
		}
		
		//Calculo a media do aluno
		media_aluno = soma_notas_aluno/2;
		
		//OBS: É preciso zera a soma_notas_aluno, porque
		//vai ser utilizada pelo proximo aluno;
		soma_notas_aluno = 0.0f;
		
		printf("A media do Aluno [%d] eh: %f\n", i+1, media_aluno);
		
		if(media_aluno >= 0 && media_aluno <= 3) { //de 0 até 3
			printf("Aluno [%d] Reprovado!\n", i+1);
			qtd_alunos_reprov++;
		}
		else if(media_aluno > 3 && media_aluno < 7){
			printf("Aluno [%d] em Exame!\n", i+1);
			qtd_alunos_exame++;
		}
		else if(media_aluno >= 7){
			printf("Aluno [%d] Aprovado!\n", i+1);
			qtd_alunos_aprov++;
		}
		else {
			printf("Erro no calculo da media\n");
		}		
		
		soma_medias_alunos = soma_medias_alunos + media_aluno;
		
	}//fim do for externo
	
	//Calcular a media de todos os alunos (media turma)
	media_turma = soma_medias_alunos/nr_alunos;
	
	printf("A media da turma eh: %4.2f\n", media_turma);
	printf("Qtd alunos aprovados: %d\n", qtd_alunos_aprov);
	printf("Qtd alunos em exame: %d\n", qtd_alunos_exame);
	printf("Qtd alunos reprovados: %d\n", qtd_alunos_reprov);
		
	return 0;
}
