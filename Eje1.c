#include <stdio.h>

int main() {
  int n = 4;
  int i = 1;

  //Parte superior
  while (i<=n)
  {
    int cont = 2, j = 1;
    while (j<=i){
      printf(" %d", cont);
      cont += 2;
      j++;
    }
    printf("\n");
    i++;
  }

  //Parte inferior
  i = n-1;
  while (i>0)
  {
    int cont = 2, j = i;
    while (j>0){
      printf(" %d", cont);
      cont += 2;
      j--;
    }
    printf("\n");
    i--;
  }

  return 0;
}
