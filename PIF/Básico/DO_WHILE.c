#include <stdio.h>

int main(void) {
  int i,j = 0;

  printf("While loop\n");
  while (i>10){ //nunca executa a instrucao

    printf("%d ",i);
    i++;
  }
  printf("\n");

  printf("Do while loop\n");
  do{ //executa a instrucao ao menos uma vez
    printf("%d ",j);
    j++;
  }while(j>10);


  return 0;
}