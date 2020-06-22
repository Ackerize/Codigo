#include <stdio.h>
#include <stdlib.h>  

int main(){
    
  int i, * vector,  mayor=0, n, *punt;
  printf ("Cantidad de numeros: ");
  scanf ("%d",&n);
  vector = (int*) calloc (n,sizeof(int));

  for(i = 1, punt=&vector[0]; punt < &vector[n] ; punt++, i++){
    printf("Introducir el entero %d: \n", i);
    scanf("%d", punt);
    if(*punt > mayor) mayor= *punt;
  }
  printf("el mayor es %d", mayor);

  free(vector);

  return 0;
}
