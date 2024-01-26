#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define slots 10
#define Q1 32
#define Q2 50

struct maquina_De_Vendas {
  char produto[Q1];
  int slot;
  int disp;
  struct maquina_De_Vendas * prox;
};

struct maquina_De_Vendas * cabeca = NULL;
struct maquina_De_Vendas * cauda = NULL;


double comprar(char * prod, double sprices[]) {
  
  if (cabeca == NULL) {
    printf("Nao temos %s disponivel no momento.\n", prod);
    return 0;
  }
  double p = 0;
  
  struct maquina_De_Vendas * atual = cabeca;
  struct maquina_De_Vendas * anterior = NULL;

  while (strcmp(atual -> produto, prod) || atual -> disp == 0) {
    
    if (atual -> prox == NULL) {
      
      printf("Nao temos %s disponivel no momento.\n", prod);
      return 0;
    } else {
      
      anterior = atual;
      atual = atual -> prox;
    }
  }

  if (atual -> slot == 5) {
    
    printf("Opa, um item 0800!\n");
    p = 0;
  } else {
    
    p += sprices[atual -> slot];
  }

  if (atual == cabeca) {
    
    cabeca = cabeca -> prox;
  } else {
    
    anterior -> disp = 1;
    anterior -> prox = atual -> prox;
  }

  return p;
}

int inserir(char * prod, int slot_, int anterior_Slot) {
  
  struct maquina_De_Vendas * novo = malloc(sizeof(struct maquina_De_Vendas));

  strcpy(novo -> produto, prod);
  novo -> slot = slot_;
  novo -> disp = 0;

  novo -> prox = NULL;
  if (cabeca == NULL) {
    cabeca = novo;
    cauda = novo;
  } else {
    if (anterior_Slot != slot_)
      cauda -> disp = 1;

    cauda -> prox = novo;
    cauda = cauda -> prox;
  }

  return slot_;
}

int main() {
  char atual_Produto[Q1];
  char produtos_Comprados[Q2][Q1];
  double preco_Slots[slots];
  int anterior_Slot = 0;

  for (int i = 0; i < slots; i++) {
    
    while (1) {
      
      scanf("%s", atual_Produto);
      anterior_Slot = inserir(atual_Produto, i, anterior_Slot);

      if (getchar() == '\n') break;
      else if (ungetc(getchar(), stdin) == '\n') break;
    }
  }
  cauda -> disp = 1;

  for (int i = 0; i < slots; i++)
    
    scanf("%lf", & preco_Slots[i]);

  double price = 0;
  for (int i = 0; scanf("%s", produtos_Comprados[i]) != EOF; i++)
    price += comprar(produtos_Comprados[i], preco_Slots);

  printf("Compras realizadas com sucesso. Voce gastou R$%.2lf.", price);
}