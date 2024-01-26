#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct No {

  int valor;
  struct No *next;
};

int vazia(struct No *head){ 
	return head == NULL;
}

void enfileirar(struct No **head, struct No **tail, int valor) {

    struct No *novo_no = (struct No *)malloc(sizeof(struct No));

  
    novo_no->valor = valor;
    novo_no->next = NULL;

    if (vazia(*head)) {
      *head = novo_no;
      *tail = novo_no;

    } else {
      (*tail)->next = novo_no;
      *tail = novo_no;
    }  
}

void desenfileirar(struct No **head, struct No **tail) {

    struct No *espaco;
    int temp;

    espaco = *head;
    temp = (*head)->valor;
    *head = (*head)->next;

    if (vazia(*head)) {
      *tail = NULL;
    }
    free(espaco);
  
}

void imprimir(struct No *head) {

  struct No *aux = head;
  printf("\n");
  while (aux != NULL) {
    if (aux->next == NULL) {
  
        printf("%d", aux->valor);
    }
    else{
       printf("%d ", aux->valor); 
    }
    aux = aux->next;
  }
  
}


int main(void) {

  struct No *head = NULL;
  struct No *tail = NULL;
  
  char escolha[20];
  int choice = 0;
  int valor;
   
    
  do {
    scanf("%s", escolha);

    if (strcmp(escolha, "Enfileirar") == 0) {
        scanf("%d", &valor);
        enfileirar(&head, &tail, valor);
    } else if (strcmp(escolha, "Desenfileirar") == 0) {
      desenfileirar(&head, &tail);
    } else if (strcmp(escolha, "Imprimir") == 0) {
      imprimir(head);
    } else if (strcmp(escolha, "Finalizar") == 0) {
      choice = 1;
    }

  } while (choice == 0);
  return 0;
}