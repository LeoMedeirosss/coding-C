#include <stdio.h>
#include <string.h>
#include <math.h>

struct pokemon{
    char nome[20];
    char tipo[20];
    float ataque;
    int defesa;
};

int main() {
  struct pokemon inimigo;
  int num;
  int i,x;
  float resultado;


  scanf("%s %s %f %d",inimigo.nome, inimigo.tipo, &inimigo.ataque, &inimigo.defesa);

  scanf("%d",&num);

  struct pokemon resto[num];

  for(int i = 0;i < num; i++){
    scanf("%s %s %f %d",resto[i].nome, resto[i].tipo, &resto[i].ataque, &resto[i].defesa);
  }

  for(int i = 0; i < num; i++) {
    if(strcmp(resto[i].tipo,"fogo") == 0 && strcmp(inimigo.tipo,"grama") == 0){
        resto[i].ataque = (resto[i].ataque * 1.5);
    }
    if(strcmp(resto[i].tipo,"grama") == 0 && strcmp(inimigo.tipo,"agua")== 0){
        resto[i].ataque = (resto[i].ataque * 1.5);

    }
    else if(strcmp(resto[i].tipo,"agua") == 0 && strcmp(inimigo.tipo,"fogo")== 0){
      resto[i].ataque = (resto[i].ataque * 1.5);
    }
  }


  for(i = 0;i < num; i++){
    for(x = i+1; x < num;x++){
      if(resto[i].ataque < resto[x].ataque){
        struct pokemon aux = resto[i];
        resto[i] = resto[x];
        resto[x] = aux;
      }
      else if(resto[i].ataque == resto[x].ataque && strcmp(resto[i].nome, resto[x].nome) > 0){
        struct pokemon aux = resto[i];
        resto[i] = resto[x];
        resto[x] = aux;
      }
    }
  }

  for(i = 0; i < num;i++){
    printf("\n%d. %s", i+1,resto[i].nome);
  }
  return 0;
}