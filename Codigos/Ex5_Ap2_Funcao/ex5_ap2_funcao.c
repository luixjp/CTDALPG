
#include <stdio.h>
#include <stdlib.h>

/*
Faça uma função que recebe a idade de uma pessoa em anos, 
meses e dias e retorna essa idade expressa em dias.

OBS: Considerando todos os meses sendo de 30 dias em média.

*/

int retornaIdadeEmDias(int anos, int meses, int dias) {

    int total_dias = 0;

    total_dias = (anos*365) + (meses*30) + dias;
    
    return total_dias;
}

int main(int argc, char const *argv[])
{
    int anos, meses, dias;

    printf("Digite quantos anos completos você tem: \n");
    scanf("%d", &anos);
    
    printf("Digite quantos meses completos você tem: \n");
    scanf("%d", &meses);

    printf("Digite quantos dias completos você tem: \n");
    scanf("%d", &dias);

    int total = retornaIdadeEmDias(anos, meses, dias);

    printf("Sua idade total em dias eh: %d\n", total);
    
    return 0;
}