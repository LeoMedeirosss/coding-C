#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contar(char caractere, char* z);

int main(void){
    int num;
    char frase[300];
    char letras[300];
    
    scanf("%d", &num); getchar();
    
    for (int i=0;i<num;i++){
        char au[300];
        scanf("%[^\n]s", au); getchar();
        strcat(frase, au);
    }

    scanf("%[^\n]s", letras);
    for(int i=0; i< strlen(letras); i++){
        printf("%c = %d\n", letras[i], contar(letras[i], frase));
    }
    
    return 0;
}

int contar(char caractere, char* z) {
    int numCarac = 0;
    for(int i=0;i<strlen(z);i++){
        if(caractere == z[i]){
            numCarac++;
        }
    }
    return numCarac;
}