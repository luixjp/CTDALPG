
#include <stdio.h>
#include <stdlib.h>


void somar(int x, int y) {

    int res=0;
    res = x + y;
    printf("O resultado da soma eh: %d\n", res);

}

int main(int argc, char const *argv[])
{

    int x, y;

    printf("Bem vindo ao programa de somar dois numeros inteiros!\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    somar(x, y);

    return 0;
}
