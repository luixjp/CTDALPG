#include <stdio.h>
#include <stdlib.h>

double fatorial(int n);

int main(int argc, char const *argv[])
{
    int num = 0;
    double f = 1;

    printf("Digite um número natural para calcular o fatorial: ");
    scanf("%d", &num);

    //chamada da função fatorial recursiva
    f = fatorial(num);
  
    printf("Fatorial de %d = %.0lf\n",num,f);
    
    return 0;
}

double fatorial (int n) {
    
    double fat;
    if ( n <= 1 )
        return (1);
    else
    {
        //Chamada recursiva
        fat = n * fatorial(n - 1);
        return (fat);
    }
}