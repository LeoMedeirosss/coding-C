#include <stdio.h>
#include <math.h>
#include <string.h>
#include <locale.h>

int main(){
  float a,b,c,delt, x1, x2;
  int soluc;
  scanf("%f %f %f", &a,&b,&c);
  delt = (b * b) - 4 * a * c;

  if (delt < 0){
    soluc = 0;
    printf("%d",soluc);
  }
  else if (delt == 0){
    soluc = 1;
    x1 = ((-b + sqrt(delt)) / (2 * a));
    printf("%.2f\n%d",x1,soluc);
  }

  else if (delt > 0){
    soluc = 2;
    x1 = ((-b + sqrt(delt)) / (2 * a));
    x2 = ((-b - sqrt(delt)) / (2 * a));
    printf("%.2f %.2f\n%d",x1 , x2, soluc);
  }

  return 0;
}
