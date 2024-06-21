#include <stdio.h>

int main() {
    int N, i, countBelowAverage = 0;
    float sum = 0.0, average;

    // Solicita o número de indivíduos
    printf("Digite o número de indivíduos: ");
    scanf("%d", &N);

    // Declara um vetor para armazenar as idades
    int idades[N];

    // Solicita as idades dos indivíduos e armazena no vetor
    for (i = 0; i < N; i++) {
        printf("Digite a idade do indivíduo %d: ", i + 1);
        scanf("%d", &idades[i]);
        sum += idades[i];
    }

    // Calcula a média das idades
    average = sum / N;

    // Conta quantas pessoas têm idade inferior à média
    for (i = 0; i < N; i++) {
        if (idades[i] < average) {
            countBelowAverage++;
        }
    }

    // Exibe a média das idades
    printf("A média das idades é: %.2f\n", average);
    // Exibe o número de pessoas com idade inferior à média
    printf("Número de pessoas com idade inferior à média: %d\n", countBelowAverage);

    return 0;
}

