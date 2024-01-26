#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 200

struct n_Numeros {
  char nome[LEN];
  int num;
};
typedef struct n_Numeros numero;

int main(void) {
  int quantidade, num, i;
  char nome[LEN];
  i = 0;

  scanf("%d", & quantidade);

  numero vet[quantidade];

  while (i < quantidade) {
    
    scanf("%s %d", vet[i].nome, & vet[i].num);
    i++;
    
  }

  for (int i = 1; i <= quantidade - 1; i++) {

    for (int j = quantidade - 1; j >= i; j--) {
      
      if (vet[j].num % 2 == 0) {
        
        while (vet[j - 1].num % 2 != 0) {
          
          numero aux = vet[j];
          vet[j] = vet[j - 1];
          vet[j - 1] = aux;
          
        }
        
      }
      
    }
    
  }
  

  for (int k = 0; k < quantidade; k++) {
    
    printf("%s\n", vet[k].nome);
    
  }

  return 0;
}