#include <stdio.h>
#include <stdlib.h>


//Prototipos
int tipoFigura(int a, int b);
int calcArea(int a, int b);

int main(int argc, char const *argv[])
{
    int base, altura;
    
    printf("Programa para identificar a Figura e calcular sua area!\n");
    printf("OBS: Digite apenas numeros inteiros!\n");
    
    printf("Digite a base da Figura: ");
    scanf("%d", &base);

    printf("Digite a altura da Figura: ");
    scanf("%d", &altura);

    int tipo = tipoFigura(altura, base);
    if(tipo == 1) {
         printf("Sua Figura eh um Quadrado!\n");
    }
    else {
        printf("Sua Figura eh um Retangulo!\n");
    }

    int area = calcArea(altura, base);
    printf("A area da Figura eh %d!\n", area);

    return 0;
}

/// @brief Verifica se a figura é um quadrado ou um retângulo
/// @param a = altura
/// @param b = base
/// @return 1 - Quadrado ou 2 - Retângulo
int tipoFigura(int a, int b) {

    if(a == b) {
        return 1; //Quadrado
    }
    else {
        return 2; //Retângulo
    }
}

int calcArea(int a, int b) {
    return a*b;
}
