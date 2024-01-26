#include <stdio.h>
#include <string.h>
#include <math.h>

struct Node
{
  int value;
  struct Node *proximo;
};

typedef struct Node node;

node *somar(node *entrada1, node *entrada2);
node *adicionar(node *head, int num);
void print(node *head);


node *somar(node *primeiraLista, node *segundaLista){
    node *somar = NULL;
    node *listaAtual = primeiraLista;
    node *segundaAtual = segundaLista;
    int carry = 0;
    int sum = 0;

    while (listaAtual != NULL || segundaAtual != NULL){
        sum = carry + (listaAtual ? listaAtual->value : 0) + (segundaAtual ? segundaAtual->value : 0);
        carry = (sum >= 10) ? 1 : 0;
        sum = sum % 10;
        somar = adicionar(somar, sum);

        if (listaAtual){
            listaAtual = listaAtual->proximo;
        }
        if (segundaAtual){
            segundaAtual = segundaAtual->proximo;
        }
    }

    if (carry > 0){
        somar = adicionar(somar, carry);
    }
    return somar;
}


node* adicionar(node *head, int number)
{
	node *new_node = (node*)malloc(sizeof(node));
    if (new_node == NULL){
      
        printf("Erro: Memória não alocada!");
        exit(1);
      
    }
  
	new_node->value = number;
	new_node->proximo = head;
	return new_node;
  
}


int main()  {
    node *entrada1 = NULL;
    node *entrada2 = NULL;

    int valor;
    int i,j;
	  char proxChar;
	
	while(scanf("%d%c", &valor, &proxChar))
	{
		entrada1 = adicionar(entrada1,valor);
		if(proxChar == '\n'){
      
		    break;
      
		}
	}
	getchar();

	while(scanf("%d%c", &valor, &proxChar))
	{
		entrada2 = adicionar(entrada2,valor);
		if(proxChar == '\n'){
      
		    break;
      
		}
	}

	getchar();

    node * sum = somar(entrada1, entrada2);
    print(sum);

    return 0;
}

void print(node *head){

    if (head == NULL){
        printf("Lista vazia!\n");
        return;
    }

    int buffer = 0;
    while (head != NULL) {
        if(head->value == 0 && buffer == 0){
            head = head->proximo;
            continue;
        }
        buffer = 1;
		printf("%d ", head->value);
        head = head->proximo;
	}
	printf("\n");
}