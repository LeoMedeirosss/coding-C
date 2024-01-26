#include <stdio.h>

int main() {
  
  // soma = s 
  // somatorio = z
  char ope;
  int num1, num2, soma;
  int i;

  printf("Qual operacao deseja fazer: ");
  scanf("%c", &ope);

  if(ope == 's'){ 
    printf("Informe dois numeros: ");
    scanf("%d %d", &num1, &num2);
    
    printf("A soma dos numero informados eh %d\n", num1 + num2);

  }else if (ope == 'z'){
     
     printf("Informe numero: ");
     scanf("%d",&num1);
     
     soma = 0;
     for(i = 1; i<= num1; i++){
         soma = soma + i;
         printf("Loop %d eh %d\n", i, soma);
     }
     
     printf("A soma dos %d primeiros numero eh %d\n", num1, soma);

  }else{
    printf("Operacao nao reconhecida\n");
  }
  
  return 0;
}