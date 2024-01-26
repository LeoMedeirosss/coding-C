#include <stdio.h>

int main(void) {
  
  int i = 0; //inicializacao

  while(i!=5){ //condicao
  printf("Calculadora: selecione uma operacao\n");
  printf("1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao, 5 - sair\n");
  scanf("%d", &i); //atualizacao

  if(i == 1){
      printf("Soma\n");

  }else if (i == 2){
      printf("Subtracao\n");
  }else if(i == 3){
      printf("Multiplicacao\n");
  }else if(i == 4){
      printf("Divisao\n");
  }else{
    if (i !=5){
    printf("Operacao desconhecida. Digite novamente.\n");
    }
  }

  }
  printf("fim\n");
  
  return 0;
}