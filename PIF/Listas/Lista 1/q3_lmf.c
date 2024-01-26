#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 500

typedef struct amigo {
  int id;
  double prox;
} lmf;

typedef struct att {
  int id;
  double tmp;
  char frase[LEN];
} att;

typedef struct Node {
  att item;
  lmf pessoa;
  struct Node * next;
  double conta;
} Node;


void enqueue_Ordenar(Node ** cabeca, att item, lmf pessoa);
void printar_Lista(Node * cabeca, int n);


void enqueue_Ordenar(Node ** cabeca, att item, lmf pessoa) {
  Node * novo = (Node * ) malloc(sizeof(Node));
  
  novo -> item = item;
  
  novo -> pessoa = pessoa;
  
  novo -> next = NULL;
  
  novo -> conta = (novo -> item.tmp * 0.2) + (novo -> pessoa.prox * 0.8);
  
  if ( * cabeca == NULL) {
    * cabeca = novo;
    
  } else {
    
    Node * aux = * cabeca;
    if (aux -> conta < novo -> conta) {
      
      novo -> next = ( * cabeca);
      * cabeca = novo;
      
    } else {
      
      while (aux -> next != NULL && novo -> conta < aux -> next -> conta) {
        aux = aux -> next;
      }
      
      if (aux -> next == NULL && novo -> conta < aux -> conta) {
        
        novo -> next = NULL;
        aux -> next = novo;
        
      } else {
        
        novo -> next = aux -> next;
        aux -> next = novo;
        
      }
    }
  }
}

void printar_Lista(Node * cabeca, int n) {
  int cont = 0;
  Node * aux = cabeca;
  while (aux != NULL && cont < n) {
    
    printf("%d%s", aux -> item.id, aux -> item.frase);
    aux = aux -> next;
    cont++;
    
  }
}

int main() {
  
  Node * cabeca = NULL;
  int tamFeed, qtdAmigos, atts;
  scanf("%d", & tamFeed);
  scanf("%d", & qtdAmigos);

  lmf amigos[qtdAmigos];
  for (int i = 0; i < qtdAmigos; i++) {
    
    scanf("%d %lf", & amigos[i].id, & amigos[i].prox);
    
  }

  scanf("%d", &atts);
  att postagens[atts];

  for (int i = 0; i < atts; i++) {
    
    scanf("%d %lf", & postagens[i].id, & postagens[i].tmp);
    fgets(postagens[i].frase, 1000, stdin);
    
  }

  if (qtdAmigos >= atts) {
    for (int i = 0; i < qtdAmigos; i++) {
      
      for (int j = 0; j < atts; j++) {
        
        if (postagens[j].id == amigos[i].id) {
          
          enqueue_Ordenar( & cabeca, postagens[j], amigos[i]);
          
        } else {
          
          continue;
          
        }
      }
    }
  } else {
    for (int i = 0; i < atts; i++) {
      for (int j = 0; j < qtdAmigos; j++) {
        if (postagens[i].id == amigos[j].id) {
          enqueue_Ordenar( & cabeca, postagens[i], amigos[j]);
          
        }
        
      }
      
    }
    
  }
  
  printar_Lista(cabeca, tamFeed);
  return 0;
}