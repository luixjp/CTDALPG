#include <stdio.h>
#include <stdlib.h>
#include <math.h> //biblioteca matematica
#define _USE_MATH_DEFINES //Para utilizar o valor de PI
/*

Escreva uma função que receba como parâmetro o raio de uma esfera,
calcule e mostre no programa principal o seu volume: v = 4/3*∏R^3.

 OBS IMPORTANTE: Iremos utilizar a biblioteca math.h para facilitar, 
 pois permite usar funções matemáticas básicas, tais como senos, 
 cossenos, exponenciais, logarítmos, etc. Para compilar utilizando a 
 biblioteca math.h é preciso adicionar o comando: -lm. 
 Exemplo:
    gcc -o ex1_ap2_funcao ex1_ap2_funcao.c -lm

DICA: utilize sempre pontos flutuantes nas equações.

OBS: Código testado apenas no Linux
*/

//prototipo da função
float calculaVolumeEsfera( float r);

int main(int argc, char const *argv[])
{
    float raio = 0.0f;

    printf("Digite o valor do (R)aio: ");
    scanf("%f", &raio);

    float v =  calculaVolumeEsfera(raio);

    printf("\nO volume eh: %f\n", v); 
    return 0;
}

float calculaVolumeEsfera( float r) {

    float volume = 0.0f;


    printf("valor de pi eh: %f\n", M_PI);
  
    // v = 4/3*∏R^3
    volume = (4.0f/3.0f)*M_PI*pow(r,3.0f);

    return volume;
    

}
