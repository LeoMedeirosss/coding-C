#include <stdio.h>

int main() {
  int a;
  printf("Digite um numero de 0 a 10: ");
  scanf("%d", &a);

  if (a == 5){
    printf("Parabens, vc acertou!\n");
  }else{

    printf("Tente novamente\n");
  }

  return 0;
}