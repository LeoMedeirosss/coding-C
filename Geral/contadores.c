#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100

int main() {
int contador_a = 0;
  int contador_e = 0;
  int contador_i = 0;
  int contador_o = 0;
  int contador_u = 0;
  char frase[MAX];
  int i,j;
  fgets(frase,MAX,stdin);

  for(i=0;i < strlen(frase);i++){
    if(tolower(frase[i]) == 'a'){
      contador_a++;
    }
    else if(tolower(frase[i]) == 'e'){
      contador_e++;
    }
    else if(tolower(frase[i]) == 'i'){
      contador_i++;
    }
    else if(tolower(frase[i]) == 'o'){
      contador_o++;
    }
    else if(tolower(frase[i]) == 'u'){
      contador_u++;
    }
  }
  printf("a %i\n",contador_a);
  printf("e %i\n",contador_e);
  printf("i %i\n",contador_i);
  printf("o %i\n",contador_o);
  printf("u %i\n",contador_u);
  
}