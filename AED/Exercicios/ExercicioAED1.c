#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 12

int main(){
  int data[n] = {3,10,17,6,8,11,2,27,20,5,2,33};
  for(int index = 0; index < n-1; index++)
    {
        int min_idx = index;
        for(int j = index+1; j < n; j++)
            if(data[j] > data[min_idx])
                min_idx = j;

        int temp = data[min_idx];
        data[min_idx] = data[index];
        data[index] = temp;
      }
  for(int index = 0;index < n; index++){
    printf("\n%d",data[index]);
  }
  printf("\no maior número do vetor é o %d",data[0]);
  printf("\no menor número do vetor é o %d",data[11]);
  return 0;
}