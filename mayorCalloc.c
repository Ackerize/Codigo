#include <stdio.h>
#include <stdlib.h>  

int main(){
    
  int i, * vector,  mayor=0, n;
  printf ("Cantidad de numeros: ");
  scanf ("%d",&n);
  vector = (int*) calloc (n,sizeof(int));

  for(i = 0; i < n ; i++){
    printf("Introducir el entero %d: \n", i+1);
    scanf("%d", &vector[i]);
    if(vector[i]>mayor) mayor=vector[i];
  }
  printf("el mayor es %d", mayor);

  free(vector);

  return 0;
}
