#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num;
    int i,j;
    int z,x;
    int m,o;
    int soma1 = 0;
    int soma2 = 0;
    int soma3 = 0;
    char sinal[3];
    
    scanf(" %d",&num);
    
    float matriz[num][num];
    float matriz2[num][num];
    float matriz3[num][num];
    
    for (i = 0;i<num;i++){
        for (j = 0;j<num;j++){
            
            scanf(" %f",&matriz[i][j]);
        }
    
     putchar('\n'); 
     
    }
    for (z = 0;z<num;z++){
        for (x = 0;x<num;x++){
            
            scanf(" %f",&matriz2[z][x]);
        }
        putchar('\n');
    }
    scanf("%s",sinal);
    
    if (sinal[0] == '+'){
        for(m = 0;m<num;m++){
            for(o = 0;o<num;o++){
                
                if(m%2 == 0){
                    
                    matriz3[m][o] = matriz[m][o] + matriz2[m][o];
                }
                else{
                    
                    matriz3[m][o] = matriz[m][o] - matriz2[m][o];
                }
                if(o<num-1){
                    printf("%.2f ",(float)matriz3[m][o]);
                }
                else{
                    printf("%.2f",(float)matriz3[m][o]);
                }
                    
                
            }
        
            putchar('\n');
        }
    }
    else{
    
        for(m = 0;m<num;m++){
            for(o = 0;o<num;o++){
                
                if(m%2 == 0){
                    
                    matriz3[m][o] = matriz[m][o] - matriz2[m][o];
                }
                else{
                    
                    matriz3[m][o] = matriz[m][o] + matriz2[m][o];
                }
                if(o<num-1){
                    printf("%.2f ",(float)matriz3[m][o]);
                }
                else{
                    printf("%.2f",(float)matriz3[m][o]);
                }
            }
        putchar('\n');
        }
    }
    
    
    
	return 0;
}