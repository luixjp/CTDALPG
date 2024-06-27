
#include <stdio.h>
#include <stdlib.h>

/*
7. Faça uma função que recebe 3 valores inteiros por parâmetro e retorna-os
ordenados em ordem crescente.

*/

//prototipo
int* ordenaInteiro(int a, int b, int c);

int main(int argc, char const *argv[])
{
    int i;
    int v[3];
    
    printf("Programa para ordenar 3 números inteiros!\n");

    for(i = 0;i < 3;i++) {
        printf("Digite o [%do] número : \n", i+1);
        scanf("%d", &v[i]);
    }
     
    int* r = ordenaInteiro(v[0], v[1], v[2]);

    printf("Ordem: ");
    for(i = 0;i < 3;i++)
        printf("%d ", r[i]);        
    printf("\n");
          
    return 0;
}

int* ordenaInteiro(int a, int b, int c) {

    //Alocação dinamica de memoria: para reservar espaço para 3 inteiros
    int* r = (int*)malloc(3 * sizeof(int));
    
    
    //Recebendo valores da função
    r[0]=a;
    r[1]=b;
    r[2]=c;

    /*
    
    Exemplo utilizando ifs-elses
    
    
    //Se a maior ou igual
    if(a<=b && a<=c) {
        r[0]=a;
        if(b<=c) {
            r[1]=b;
            r[2]=c;
        }
        else {
            r[1]=c;
            r[2]=b;
        }
    }

    //Se b maior ou igual
    if(b<=a && b<=c) {
        r[0]=b;
        if(a<=c) {
            r[1] =a;
            r[2] =c;
        }
        else {
            r[1] =c;
            r[2] =a;
        }
    }

    //Se c maior ou igual
    if(c<=a && c<=b) {
        r[0]=c;
        if(b<=a) {
            r[1] =b;
            r[2] =a;
        }
        else {
            r[1] =a;
            r[2] =b;
        }
    }
    */

    //Exemplo fazendo a ordenação com laços 'for'
    for(int i = 0; i < 3; i++) { //percorrendo o vetor
        int menor = i;
        for(int j = i + 1; j < 3; j++) { //varendo as próximas posições do vetor
            if (r[j] < r[menor]) 
                menor = j; //se encontrar um menor coloca o index na variavel 'menor' 
        }
        int aux = r[i]; //salva em aux o valor anterior para nao perder
        r[i] = r[menor]; //efetua a troca dos números nas posições
        r[menor] = aux; //recupera o valor anterior
   }
    
   return r;
}
