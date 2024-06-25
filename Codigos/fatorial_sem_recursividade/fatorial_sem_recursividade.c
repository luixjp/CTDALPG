#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    double f = 1;

    printf("Digite um número natural para calcular o fatorial: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("Fatorial de n<= 1 eh 1\n");
    }
    else {
        while(n > 1) {
            f *= n;            
            n--; 
        }
        printf("Fatorial eh %.0lf\n", f);
    }
    
    return 0;
}