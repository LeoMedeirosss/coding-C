#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
  _Bool stringsIguais (char s1[], char s2[]);

  if(stringsIguais("casa","casa")){
    printf("eles sao iguais");
  }
  else{

    printf("eles nao sao iguais");
  }
  
  
  
  return 0;
}

_Bool stringsIguais(char s1[],char s2[]){

  int i = 0;

  while (s1[i]==s2[i] && s1[i] != '\0' && s2[i] != '\0' ){

  i++;
    
  }
  if(s1[i] == '\0' && s2[i] == '\0'){
    
    return 1;
    
  }
  else{
    
    return 0;
    
  }
}