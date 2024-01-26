#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 13

int main() {

  int vetor[LEN] = {25,4,10,12,14,9,21,20,3,1,9,11,21};

for(int i =0; i <LEN; i++){
  int j = i;
  while((vetor[j] < vetor[j-1]) && j > 0){
    int aux = vetor[j-1];
    vetor[j-1] = vetor[j];
    vetor[j] = aux;
    --j;
      
      
    } 
  }
    for(int i = 0; i < LEN; i++){
    printf("\n%d", vetor[i]);
  }
  printf("\no menor número do vetor é o %d",vetor[0]);
  printf("\no maior número do vetor é o %d",vetor[12]);
  printf("\no número que está no centro do vetor é o %d",vetor[6]);
  
return 0;
}
