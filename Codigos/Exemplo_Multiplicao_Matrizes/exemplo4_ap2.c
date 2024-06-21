#include <stdio.h>
#include <stdlib.h>

/*

Crie um programa que preencha uma primeira matriz de ordem 4X3 e
uma segunda matriz 3X2. O programa deverá calcular e mostrar a matriz
resultante do produto matricial das duas matrizes anteriores,
armazenando-a em uma terceira matriz de ordem 4X2.

A[4,3] e B [3,2] -> C[4,2]

*/


int main(int argc, char const *argv[])
{

    int i, j, k, mult, soma;
    int A[4][3], B[3][2], C[4][2];
    
    printf ("Informe os elementos da primeira (A) matriz:\n");

    // A [4,3]
    for(i=0 ; i<4 ; i++) //nr de linhas = 4
    {
        for (j=0 ; j<3 ; j++) //nr de colunas = 3
        {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    //Matriz A preenchida.

     printf ("Informe os elementos da segunda (B) matriz:\n");

    // B [3,2]
    for(i=0 ; i<3 ; i++) //nr de linhas = 3
    {
        for (j=0 ; j<2 ; j++) //nr de colunas = 2
        {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    //Matriz B preenchida.

    //Realizar a multiplicação da matrix
    //Matrix C[4,2]
    for (i=0 ; i<4 ; i++) //nr de linhas = 4
    {
        for (j=0 ; j<2 ; j++) //nr de colunas = 2
        {
            soma = 0;
            //três multiplicações: nr colunas 1a matriz == nr linhas da segunda matriz == 3
            //posição na matrix
            for (k=0 ; k<3 ; k++) 
            {
                mult = A[i][k] * B[k][j];
                soma = soma + mult;
            }
            C[i][j] = soma;
        }
    }

    //Imprmir a matriz resultante C[4][2]
    printf("Os elementos da matriz resultante são: \n");
    for (i=0 ; i<4 ; i++)
    {
        for (j=0 ; j<2 ; j++)
        {
            printf("C[%d][%d] = %d ", i+1, j+1, C[i][j]);
        }
        printf("\n");
    }

return 0;

    return 0;
}