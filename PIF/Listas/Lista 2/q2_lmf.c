#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct coiso{
    int id, qty_temp, tempC;
    float temp;
    char fumaca;
};

 int main(void) {
    int teste=0, num=0;
    int id = 0;
    int i,j;
    float avg=0, sum=0;

    scanf("%d", &teste);
    for(int i=0; i<teste; i++){
        scanf("%d", &num);
        struct coiso data[num];
        for(int j=0; j<num; j++){
            scanf("%d %f %c", &data[j].id, &data[j].temp, &data[j].fumaca);
            sum = data[j].temp + sum;
        }
        printf("TESTE %d\n", i+1);
        avg = sum/num;
        for(int j=0; j<num; j++){
            if(data[j].fumaca=='S' || data[j].temp>(avg*1.15) || data[j].temp>=40){
                printf("%d\n", data[j].id);
            }
        }
    }
   
   return 0;
   
}