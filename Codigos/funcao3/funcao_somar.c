
#include <stdio.h>
#include <stdlib.h>


int somar(int x, int y) {

    int res=0;

    res = x + y;

    return res;

}

int main(int argc, char const *argv[])
{

    int total, x, y;

    printf("Bem vindo ao programa de somar dois numeros inteiros!\n");

    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    total = somar(x, y);

    printf("O resultado da soma eh: %d\n", total);

    return 0;
}
