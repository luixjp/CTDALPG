#include <stdio.h>

int main() {
    int X[5], Y[5], Z[10];
    int i;
    int index = 0;

    // Leitura do vetor X
    printf("Digite 5 elementos para o vetor X:\n");
    for (i = 0; i < 5; i++) {
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);
        Z[index++] = X[i];
    }

    // Leitura do vetor Y
    printf("Digite 5 elementos para o vetor Y:\n");
    for (i = 0; i < 5; i++) {
        printf("Y[%d]: ", i);
        scanf("%d", &Y[i]);
        Z[index++] = Y[i];
    }

    // Construção do vetor Z como junção de X e Y
    /*for (i = 0; i < 5; i++) {
        Z[i] = X[i];
    }
    for (i = 0; i < 5; i++) {
        Z[i + 5] = Y[i];
    }*/

    // Exibindo o vetor Z
    printf("Vetor Z (junção de X e Y):\n");
    for (i = 0; i < 10; i++) {
        printf("Z[%d]: %d\n", i, Z[i]);
    }

    return 0;
}

