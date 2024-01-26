#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main() {
int x,z,i,j;
  printf("digite x: ");
  scanf("%d",&x);

  printf("digite z: ");
  scanf("%d",&z);
  
  for (i = 0;i < x;i++){
    
    printf("\n*");
    
    for (j = 1; j < z;j++){
      
      printf("*");

    }
  }
  
  return 0;
  }