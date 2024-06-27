#include <stdio.h>

int main() {
    int N, i, countBelowAverage = 0;
    float sum = 0.0, average;

    // Solicita o n�mero de indiv�duos
    printf("Digite o n�mero de indiv�duos: ");
    scanf("%d", &N);

    // Declara um vetor para armazenar as idades
    int idades[N];

    // Solicita as idades dos indiv�duos e armazena no vetor
    for (i = 0; i < N; i++) {
        printf("Digite a idade do indiv�duo %d: ", i + 1);
        scanf("%d", &idades[i]);
        sum += idades[i];
    }

    // Calcula a m�dia das idades
    average = sum / N;

    // Conta quantas pessoas t�m idade inferior � m�dia
    for (i = 0; i < N; i++) {
        if (idades[i] < average) {
            countBelowAverage++;
        }
    }

    // Exibe a m�dia das idades
    printf("A m�dia das idades �: %.2f\n", average);
    // Exibe o n�mero de pessoas com idade inferior � m�dia
    printf("N�mero de pessoas com idade inferior � m�dia: %d\n", countBelowAverage);

    return 0;
}

