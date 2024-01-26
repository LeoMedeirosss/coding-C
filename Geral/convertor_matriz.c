#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define LEN 1

int main() {
  
  int len = LEN;
  int cont;
  int pos;
  int i, j, v, b;
  int n = 0;
  char letra;
  
  scanf("%d %d %c", &v, &pos, &letra);
  cont = letra - 0;
  len = (v*2)-1;
  int mtz[len][len];
  if(pos==-1) {
      cont = cont + (v-1);
      if(cont>122) {
          cont = cont - 26;
      }
      for(int b;b<v;b++) {
          if(cont>96){
            for(i=n;i<len-n;i++){
              mtz[n][i] = cont;
              
              }
              
              for(i=n+1;i<len-(n);i++) {
                mtz[i][len-(n+1)] = cont;
              }
      
              for(i=len-(n+2);i>n-1;i--) {
                mtz[len-(n+1)][i] = cont;
               }   
      
               for(i=len-(n+2);i>n;i--) {
                  mtz[i][n] = cont;
               }
               cont--;
              n++;
          }
           else{
               cont = cont + 26;
               for(i=n;i<len-n;i++) {
                mtz[n][i] = cont;
              }
                
              for(i=n+1;i<len-(n);i++) {
                  mtz[i][len-(n+1)] = cont;
              }
      
              for(i=len-(n+2);i>n-1;i--) {
                   mtz[len-(n+1)][i] = cont;
                
               }   
      
               for(i=len-(n+2);i>n;i--) {
                   mtz[i][n] = cont;
                 
              }
              
              cont = cont - 1;
              n++;
             
           }
        
       }
    
   }
    
   else {
       for(int b;b<v;b++) {
          if(cont<123) {
            for(i=n;i<len-n;i++) {
                mtz[n][i] = cont;
               }
               
               for(i=n+1;i<len-(n);i++) {
                  mtz[i][len-(n+1)] = cont;
               }
       
               for(i=len-(n+2);i>n-1;i--) {
                  mtz[len-(n+1)][i] = cont;
               }   
       
              for(i=len-(n+2);i>n;i--) {
                mtz[i][n] = cont;
               }
                
              cont++;
              n++;
            
          }
            
          else {
              cont = 97;
              for(i=n;i<len-n;i++) {
                mtz[n][i] = cont;
                
              }
                
               for(i=n+1;i<len-(n);i++) {
                mtz[i][len-(n+1)] = cont;
                 
               }
        
              for(i=len-(n+2);i>n-1;i--) {
                mtz[len-(n+1)][i] = cont;
                
               }   
        
               for(i=len-(n+2);i>n;i--){
                mtz[i][n] = cont;
                 
              }
                
              cont++;
              n++;
            
           }
         
      }
     
  }
  
   for(i=0;i<len;i++) {
      for(j=0;j<len;j++) {
        printf("%c", mtz[i][j]);
        
      }
     
      printf("\n");
  }
}