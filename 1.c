#include <stdio.h>

int main(){
  double var1 = 0, n = 1, x = 0.7; 
  do{
    n *= 2;
    var1 += 1/(x*n);
  }while(!(1/(x++*n) < 0.0000000001));

printf("serie = %.10lf\n", var1);

return 0;
}
