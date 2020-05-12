#include <stdio.h>

int main() {
  int n = 4;

  //Parte superior
  for (int i=1; i<=n; i++)
  {
    int cont = 2;
    for (int j=1; j<=i; j++ ){
      printf(" %d", cont);
      cont += 2;
    }
    printf("\n");
  }

  //Parte inferior
  for (int i=n-1; i>0; i--)
  {
    int cont = 2;
    for (int j=i; j>0; j-- ){
      printf(" %d", cont);
      cont += 2;
    }
    printf("\n");
  }

  return 0;
}
