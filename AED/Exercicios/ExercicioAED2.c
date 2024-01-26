#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 7


int main() {
  float lista1[LEN];
  float lista2[LEN];
  int i;

  for(i = 0;i < LEN;i++){
    printf("os salários entre 1700 e 5000 R$ ");
    scanf("%f",&lista1[i]);
    if(lista1[i] >= 1700 && lista1[i] <= 5000){
     continue;
    }
    else{
      printf("Corretamente, por favor,");
      i--;
    }
    lista1[i]=lista2[i];
  }
  for(int i =0; i <LEN; i++){
    int j = i;
    while((lista1[j] < lista1[j-1]) && j > 0){
      int aux = lista1[j-1];
      lista1[j-1] = lista1[j];
      lista1[j] = aux;
      --j;
      
      
    }
  for(int i =0; i < LEN; i++){
    int j = i;
    while((lista2[j] > lista2[j-1]) && j > 0){
      int aux = lista2[j-1];
      lista2[j-1] = lista2[j];
      lista2[j] = aux;
      --j;

      
      }
  }
    
  }
for(int i = 0; i < LEN; i++){
  printf("\n%f ", lista1[i]);

  }
  for(int i = 0; i < LEN; i++){
  printf("\n%f ", lista2[i]);

  }

  return 0;
}
