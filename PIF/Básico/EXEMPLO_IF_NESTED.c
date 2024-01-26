#include <stdio.h>

int main() {
  
  int var1,var2; 
  printf("Digite dois numeros inteiros de 0 a 100: ");
  scanf("%d %d", &var1, &var2);

  if(var1 != var2){// primeiro if (externo)

    if(var1 > var2 ){//segundo if (interno)
      printf("Primeiro numero fornecido maior que o segundo\n");
    }else{
      printf("Segundo numero fornecido maior que o primeiro\n");
    }
  }else { 
    printf("Os numeros sao iguais, tente novamente\n");
  }
  
  return 0;
}