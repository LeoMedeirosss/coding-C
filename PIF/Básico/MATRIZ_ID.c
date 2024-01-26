#include <stdio.h>

int main() {

  int a;
  printf("Digite as dimensoes de sua matriz\n");
  scanf("%d", &a);
  int my_matrix[a][a];
  int i,j; 

  printf("Vc construiu uma matriz de %dx%d elementos\n", a,a);

  for(i=0; i<a; i++){ //percorrendo linhas
     printf("| ");
    for(j=0; j<a; j++){ //percorrendo colunas
      
      if(i+j == (a-1) ){
        my_matrix[i][j] = 1;
      } else{
        my_matrix[i][j] = 0;
      }
      printf("  %d  ", my_matrix[i][j]);

    }

   printf("| \n");
    
  }
  
  return 0;
}