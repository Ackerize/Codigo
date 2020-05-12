#include <stdio.h>

#define M_PI 3.14159265358979323846


int main(void) {
  float valorReal = ((4*M_PI*M_PI) - 39)/16.0;
  float valorAprox = 0;
  int cont = 1;
  while((valorReal - valorAprox) >= 0.0001){
    valorAprox += 1.0/(cont*cont*(cont+1)*(cont+1)*(cont+2)*(cont+2));
    cont++;
  }
  printf("Valor real: %f \n", valorReal);
  printf("Valor aproximado: %f \n", valorAprox);

  return 0;
}
