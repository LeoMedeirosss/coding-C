#include <stdio.h>

int main(void) {
  
  int a,i,f;
  int arr[6] = {1,5,11,56,3,17};

  printf("Digite um numero de 0 a 10:\n");
  scanf("%d", &a);

  f = 1;
  for(i = 1; i<=a; i++){ //calculando o fatorial de um numero
    f = f*i;    //valores intermediarios
    printf("Loop numero %d valor %d\n",i,f);
  }
           //valores finais
  printf("O fatorial de %d e %d\n",a,f);

  for(i = 5; i >=0; i--){ //imprimindo um array em ordem descrescente
    printf("O elemento %d de arr e %d\n", i, arr[i]);
  }

  for(i = 0; i < 6; i = i + 2){ //imprimindo um array em ordem crescente
    printf("O elemento %d de arr e %d\n", i, arr[i]);
  }

  return 0;
}