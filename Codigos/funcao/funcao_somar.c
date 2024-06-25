
#include <stdio.h>
#include <stdlib.h>


void somar() {

    int res=0, x, y;

    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    res = x + y;

    printf("O resultado da soma eh: %d\n", res);

}

int main(int argc, char const *argv[])
{
    printf("Bem vindo ao programa de somar dois numeros inteiros!\n");

    somar();

    return 0;
}
