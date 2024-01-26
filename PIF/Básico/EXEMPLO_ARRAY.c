#include <stdio.h>

int main() {
  int a;
  printf("Digite um numero de 0 a 10: ");
  scanf("%d", &a);
  int my_array[a];
  int i;

  printf("Vc construiu um array de %d elementos\n", a);

  for(i=0; i<a; i++){
    my_array[i] = i+1;
    printf("Elemento [%d] igual a %d\n", i, my_array[i]);
  }
  
  return 0;
}