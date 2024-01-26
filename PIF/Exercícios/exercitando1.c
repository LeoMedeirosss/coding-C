#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int main() {
  int a;
  int b;
  int c;
  int min;

  printf("digite A: ");
  scanf("%d",&a);
  printf("digite B: ");
  scanf("%d",&b);
  printf("digite C: ");
  scanf("%d",&c);

  if (a < b && a < c){

    min = a;
    printf("o menor numero é o %d", min);
    
  }
  else if(b < a && b < c){

    min = b;
    printf("o menor numero é o %d", min);
    
  }
  else if(c < a && c < b){

    min = c;
    printf("o menor numero é o %d", min);

  }
  else{
    printf("existem dois ou mais números iguais.");
  }


  return 0;
    
  }