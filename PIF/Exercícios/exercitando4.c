#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void concatenarStrings(char string1[], int t1,char string2[], int t2, char string3[]);

int main(void) {
  char palavra1 [] = {'p','a','o',' ','e',' '};
  char palavra2 [] = {'m','o','r','t','a','d','e','l','a'};
  char novapalavra [15];

  concatenarStrings(palavra1,6,palavra2,9,novapalavra);
  int i;
  for(i = 0;i < 15;i++){
    printf("%c",novapalavra[i]);
  }

  
  return 0;
  }

void concatenarStrings(char string1[], int t1,char string2[], int t2, char string3[]){
  int i, j;
  for(i = 0;i < t1;i++){
    string3[i] = string1[i];
    for(j = 0;j < t2;j++){
      string3[t1 + j] = string2[j];
    }
  }
}