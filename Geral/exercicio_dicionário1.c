#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define LEN 999

const char * remover_Carac(char * string);
const char * up(char * string);
const char * low(char * string);

struct dicionario {

  char palavra[LEN];

};

int main(void) {
  int tam = 0;
  int res;
  char vis[100], temp[LEN];
  char auxiliar[100];
  int cont_Palavra = 0;
  int printar = 0;

  strcat(vis, "-1");

  struct dicionario palavras[2500];
  strcat(palavras[tam].palavra, "");

  char * token, espaco[2] = " ";

  while (strcmp(palavras[tam - 1].palavra, vis) != 0) {

    scanf("%s", temp);
    if (strcmp(temp, vis) != 0) {

      remover_Carac(temp);
      token = strtok(temp, espaco);
      while (token != NULL) {
        
        strcat(palavras[tam].palavra, token);
        token = strtok(NULL, espaco);
        up(palavras[tam].palavra);
        tam++;
      }

    } else {
      
      break;
      
    }

  }


  for (int i = 1; i <= tam - 1; i++) {
    
    for (int j = tam - 1; j >= i; j--) {

      if (strcmp(palavras[j].palavra, palavras[j - 1].palavra) < 0) {
        
        strcpy(auxiliar, palavras[j].palavra);
        strcpy(palavras[j].palavra, palavras[j - 1].palavra);
        strcpy(palavras[j - 1].palavra, auxiliar);

      }
    }
  }

  for (int k = 0; k < tam; k++) {
    
    for (int l = 0; l <= tam; l++) {
      
      if (strcmp(palavras[k].palavra, palavras[l].palavra) == 0) {
        
        cont_Palavra++;
        if (cont_Palavra > 1) {
          
          strcat(palavras[l].palavra, "repete");
        }
      }
      if (palavras[k].palavra[l] > 96) {
        
        printar++;
      }
    }
    if (printar == 0) {
      low(palavras[k].palavra);
      printf("%s %d\n", palavras[k].palavra, cont_Palavra);
    }
    cont_Palavra = 0;
    printar = 0;
  }

  return 0;
}


const char * up(char * string) {

  int tamanho = strlen(string);

  for (int i = 0; i < tamanho; i++) {
    
    if (string[i] > 96) {
      
      string[i] = string[i] - 32;
    }
  }
}


const char * low(char * string) {

  int tamanho = strlen(string);

  for (int i = 0; i < tamanho; i++) {
    
    if (string[i] < 91) {
      
      string[i] = string[i] + 32;
    }
  }
}


const char * remover_Carac(char * string) {

  int pos = 0;

  while (string[pos] != '\0') {
    
    if (string[pos] == '.' || string[pos] == '"' || string[pos] == '(' || string[pos] == '*' || string[pos] == '$' || string[pos] == '#' || string[pos] == ':') {

      string[pos] = ' ';
    }
    
    pos++;
  }
  
  return string;
}