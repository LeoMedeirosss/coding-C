#include <stdio.h>

int main(void) {
  
  int arr[10],i;
  int a = 5;
  int b,soma; //declaracao
  b = 6;
  arr[0] = a; //primeiro elemento de arr recebe o valor que esta a
  arr[9] = b; //ultimo elemento de arr recebe o valor de b 
  soma = a + b; //inicializacao
  float c,d,divi;
  c = 6.5;
  d = 7.0;
  divi = c/d;

  printf("A soma de a e b eh iqual a %d\n", soma);
  printf("A divisao de c e d eh iqual a %.3f\n", divi);

  printf("Digite dois numeros de 0 a 10: \n");
  scanf("%d %d", &a, &b);

  soma = a + b;
  printf("A soma de a e b eh iqual a %d\n", soma);

  for(i=0;i<10;i++){
    arr[i] = i + 3;
  }


  return 0;
}