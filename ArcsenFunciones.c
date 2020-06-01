#include <stdio.h>


int factorial(int x){
  int resultado = 1;
  if( x == 0){
    return 1;
  }
  for(int i = 1; i <= x; i++){
    resultado *= i;
  }
  return resultado;
}

float potencia(float base, int exponente){
  float resultado = base;
  if(exponente == 0){
    return 1.0;
  }
  for(int i = 1; i < exponente; i++){
    resultado *= base;
  }
  return resultado;
}

float serie(int g, float x){
  float respuesta = 0;
  for(int i = 0; i <= g; i++){
    respuesta += ((factorial(2*i))/(potencia(2.0, 2*i)*potencia(factorial(i),2)*((2*i) + 1)))*potencia(x, (2*i)+1);
  }
  return respuesta;
}


int main()
{ 
  float num=1, den=2, den_expo=3, x_expo;
  int n = 1;
  float x;

    do{
    printf("Introduce un valor de X (que sea x<1)\n");
    scanf("%f", &x);
    }while(x>1);

    float respuesta = serie(6, x), frac = x;
  
    x_expo=(x)*(x)*(x);
  printf(" El valor real de la serie es: %f\n", respuesta);
    
    do{
        frac += ((factorial(2*n))/(potencia(2, 2*n)*potencia(factorial(n),2)*((2*n) + 1.0)))*potencia(x, (2*n)+1);
        n++;
    }while((respuesta - frac)>0.0001);

    printf(" El valor de la serie es: %f\n", frac);

    return 0;

}
