#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 10000000

//declarando funções secundarias
int funRec(int y, int som, int m);
int quantPM(int m);

int funRec(int x, int som, int m) {
  
  if (som >= MAX) {
    
    return x-1;
  } else {
    
    if (x % 2 == 1) {
      
      return funRec(x+1, som+m , m);
    } else {
      
      return funRec(x+1, som+x , m);
    }
    
  }
  
}


int quantPM(int m) {
  
  return funRec(0, 0, m);
}

//função main
int main() {
  int ingr;
  int v;
  
  scanf("%d", &v);
  
  ingr = quantPM(v);
  
  printf("%d pessoas precisam assistir ao jogo.", ingr);
  
  return 0;
}