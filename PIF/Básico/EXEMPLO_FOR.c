#include <stdio.h>

int main() {
  int a;
  printf("Digite um numero de 0 a 10: ");
  scanf("%d", &a);
  int soma = 0;
  int i;

  for(i=0; i<=a; i++){
    soma = soma + i;
  }
  
  printf("A soma dos %d primeiros numeros eh %d",a,soma);

  return 0;
}