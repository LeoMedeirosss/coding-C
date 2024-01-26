#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000

typedef struct tree {
  int vl;
  struct tree * principal, * right, * left;
}

arvore;
arvore * raiz, * atual;

int verBinaria(arvore * auxiliar);
void executar(void);
void insere(int vl, char lado);
void criarTree(char str[]);

int verBinaria(arvore * auxiliar) {
  
  if (auxiliar == NULL)
    return 1;
  
  if (auxiliar -> vl != -1) {
    
    if ((auxiliar -> left -> vl != -1 && auxiliar -> left -> vl > auxiliar -> vl) 
      || (auxiliar -> right -> vl != -1 && auxiliar -> right -> vl < auxiliar -> vl))
      
      return 0;
  }
  
  return verBinaria(auxiliar -> left) && verBinaria(auxiliar -> right);
  
}

void executar() {
  
  if (verBinaria(raiz))
    printf("VERDADEIRO");
    
  else
    printf("FALSO");
  
}

void insere(int vl, char lado) {
  
  arvore * auxiliar = (arvore * ) malloc(sizeof(arvore));
  arvore * auxiliar2 = (arvore * ) malloc(sizeof(arvore));
  
  if (raiz == NULL) {
    auxiliar2 -> vl = -1;
    auxiliar2 -> principal = auxiliar;
    auxiliar2 -> left = NULL;
    auxiliar2 -> right = NULL;
    auxiliar -> vl = vl;
    auxiliar -> principal = NULL;
    auxiliar -> right = auxiliar2;
    auxiliar -> left = auxiliar2;
    
    raiz = auxiliar;
    
  } else {
    
    if (lado == 'e') {
      auxiliar2 -> vl = -1;
      auxiliar2 -> principal = auxiliar;
      auxiliar2 -> left = NULL;
      auxiliar2 -> right = NULL;
      auxiliar -> vl = vl;
      auxiliar -> principal = atual;
      auxiliar -> right = auxiliar2;
      auxiliar -> left = auxiliar2;
      
      atual -> left = auxiliar;
      
    } else {
      
      auxiliar2 -> vl = -1;
      auxiliar2 -> principal = auxiliar;
      auxiliar2 -> left = NULL;
      auxiliar2 -> right = NULL;
      auxiliar -> vl = vl;
      auxiliar -> principal = atual;
      auxiliar -> right = auxiliar2;
      auxiliar -> left = auxiliar2;
      
      atual -> right = auxiliar;
      
    }
    
  }
  
  atual = auxiliar;
  
}

void criarTree(char str[]) {
  
  int i, vl;
  char c, lado;
  
  for (i = 0; i < strlen(str); i++) {
    char auxiliar[MAX] = "";
    
    if (str[i] == '(') {
      int a = 0;
      
      while (str[i + 1] != '(' && str[i + 1] != ')' && str[i + 1] != ' ') {
        auxiliar[a] = str[++i];
        a++;
        
      }
      
      if (str[i + 1] == ')') {
        
        if (lado == 'e')
          atual = atual -> left;
          
        else
          
          atual = atual -> right;
        
      } else {
        vl = atoi(auxiliar);
        insere(vl, lado);
        lado = 0;
        
      }
      
    } else if (str[i] == ')') {
      lado = 'd';
      atual = atual -> principal;
      
    }
    
  }
  
}

int main() {
  
  atual = NULL;
  raiz = NULL;
  
  char str[MAX];
  
  fgets(str, MAX, stdin);
  
  criarTree(str);
  executar();
  
  return 0;
  
}