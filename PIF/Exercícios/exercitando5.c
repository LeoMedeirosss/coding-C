#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanhoString(char string[]);

int main(void) {
  char stringExemplo[30];

  printf("digite uma palavra: \n");
  scanf("%s",stringExemplo);


  int num = tamanhoString(stringExemplo);

  printf("%d", num);
  
  
  return 0;
}

int tamanhoString(char string[]){

  int cont = 0;

  while(string[cont] != '\0') {
    cont++;
  }

  return cont + 1;

  
}