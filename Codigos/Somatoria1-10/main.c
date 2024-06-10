#include <stdio.h>
#include <stdlib.h>


/*
  Aula do dia 24/05/2024
  Laços de Repetição
*/
int main(int argc, char *argv[])
{
    
  //Somar os numeros entre 1 e 10
  
  //Variaveis
  int i, soma;

  soma = 0;
  i = 1;
  
  //laço de repetição para ir somando de 1 até 10
  /*
  do {
      
      soma = soma + i;
      i = i +1;      
      
  }
  while(i<=10);
  */
  
  /*
  while(i<=10) {
      soma = soma + i;
      i = i +1;         
  }
  */
  
  for(i = 1; i<=10; i = i+1){
        soma = soma + i;
  }
  
  
  printf("O valor da soma eh: %d\n", soma);
  
  system("PAUSE");	
  return 0;
}
