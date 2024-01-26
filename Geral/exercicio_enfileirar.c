#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define LEN 1000

typedef struct NO {
  char nome[LEN];
  struct NO * prox;
}
NO;

typedef struct FILA {
  NO * inicio;
  NO * fim;
  int qnt;
}
FILA;

typedef struct FILA2 {
  NO * cabeca;
  NO * tail;
  int qnt2;
}
FILA2;

void enfileirar(char * nome, FILA * f) {
  NO * pontr = (NO * ) malloc(sizeof(NO));
  strcpy(pontr -> nome, nome);
  pontr -> prox = NULL;
  printf("%s foi para a fila da Area 2\n", pontr -> nome);
  if (f -> inicio == NULL) {
    f -> inicio = pontr;
  } else {
    f -> fim -> prox = pontr;
  }
  f -> fim = pontr;
  f -> qnt = f -> qnt + 1;
  return;
}

void enfileirar2(char * nome, FILA2 * f) {

  NO * pontr = (NO * ) malloc(sizeof(NO));
  int qnt2 = 1;
  strcpy(pontr -> nome, nome);
  pontr -> prox = NULL;
  printf("%s foi para a fila do RU\n", pontr -> nome);
  if (f -> cabeca == NULL) {
    f -> cabeca = pontr;
  } else {
    f -> tail -> prox = pontr;
  }
  f -> tail = pontr;
  f -> qnt2 = f -> qnt2 + qnt2;
  return;
}

char desenfileirar(FILA * f) {
  NO * pontr = f -> inicio;
  char nome[LEN];
  if (pontr != NULL) {
    f -> inicio = pontr -> prox;
    pontr -> prox = NULL;
    strcpy(nome, pontr -> nome);
    free(pontr);
    printf("%s almocou na Area 2 e esta voltando pra aula\n", nome);
    return nome[LEN];
  } else {
    printf("Nao ha mais ninguem para comer aqui\n");
    return 0;
  }
  f -> qnt--;
}

char desenfileirar2(FILA2 * f) {
  NO * pontr = f -> cabeca;
  char nome[LEN];
  if (pontr != NULL) {
    f -> cabeca = pontr -> prox;
    pontr -> prox = NULL;
    strcpy(nome, pontr -> nome);
    free(pontr);
    printf("%s almocou no RU e esta voltando pra aula\n", nome);
    return nome[LEN];
  } else {
    printf("Nao ha mais ninguem para comer aqui\n");
    return 0;
  }
  f -> qnt2--;
}

void init(FILA * f) {
  f -> inicio = NULL;
  f -> fim = NULL;
}

void init2(FILA2 * f) {
  f -> cabeca = NULL;
  f -> tail = NULL;
}


int main(void) {

  FILA * f1 = (FILA * ) malloc(sizeof(FILA));
  FILA2 * f2 = (FILA2 * ) malloc(sizeof(FILA2));
  
  int len;
  char r1[LEN];
  char r2[LEN];
  char e1[LEN];
  char e2[LEN];
  char nome[LEN];
  char fav[LEN];
  char auxiliar[LEN] = "SAIU";
  char auxiliar2[LEN] = "AREA2\n";
  f1 -> qnt = 0;
  
  f2 -> qnt2 = 0;

  init(f1);
  
  init2(f2);

  if (f1 == NULL || f2 == NULL) {
    
    printf("Erro de alocacao!\n");
    exit(-1);
  } else {

    fgets(r1, 1000, stdin);
    fgets(r2, 1000, stdin);

    char * token;

    token = strtok(r1, ":");
    strcpy(r1, token);

    while (token != NULL) {
      
      strcpy(e1, token);
      token = strtok(NULL, ":");
    }

    char * token2;

    token2 = strtok(r2, ":");
    strcpy(r2, token2);

    while (token2 != NULL) {
      
      strcpy(e2, token2);
      token2 = strtok(NULL, ":");
    }

    while (fgets(nome, 1000, stdin) != NULL) {

      char * tokennome;
      tokennome = strtok(nome, ":");
      strcpy(nome, tokennome);

      while (tokennome != NULL) {
        
        strcpy(fav, tokennome);
        tokennome = strtok(NULL, ":");
      }

      len = strlen(nome);
      if (nome[len - 1] == '\n') {
        
        nome[len - 1] = 0;
      }

      if (strcmp(auxiliar, nome) == 0) {

        if (strcmp(auxiliar2, fav) == 0) {

          desenfileirar(f1);
        } else {

          desenfileirar2(f2);
        }

      } else {

        if (strcmp(e1, e2) != 0) {

          if (nome[len - 1] != 0) {

            if (strcmp(e1, fav) == 0) {

              enfileirar2(nome, f2);
            } else {

              if (strcmp(e2, fav) == 0) {

                enfileirar(nome, f1);
              } else {

                if (f1 -> qnt < f2 -> qnt2 || f1 -> qnt == f2 -> qnt2) {
                  
                  enfileirar(nome, f1);
                } else {
                  
                  enfileirar2(nome, f2);

                }
              }
            }
          } else {

            if (f1 -> qnt < f2 -> qnt2 || f1 -> qnt == f2 -> qnt2) {
              enfileirar(nome, f1);
            } else {
              
              enfileirar2(nome, f2);

            }
          }
        } else {

          if (f1 -> qnt < f2 -> qnt2 || f1 -> qnt == f2 -> qnt2) {
            
            enfileirar(nome, f1);
          } else {
            
            enfileirar2(nome, f2);

          }
        }
      }
    }
  }
  return 0;
}