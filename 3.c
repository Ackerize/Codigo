#include <stdio.h>

//Declaracion de la funcion recursiva
float serieRecursiva(float, float, float, float, float, float, float, float, float);

int main()
{ float x, num=1, den=2, den_expo=3, aux=2,aux2 =3, x_expo, frac, resultado=0;
    
    do{
    printf("Introduce un valor de X (que sea x<1)\n");
    scanf("%f", &x);
    }while(x>1);

    x_expo=(x)*(x)*(x);
    frac = x;
    resultado = x;

    // Calculo del valor "real" de la serie con el valor de X ingresado
    for(int i =0; i <=10; i++){
      resultado += ((num)/((den)*(den_expo)))*(x_expo);
      num= num * aux2;
      aux2 += 2;
      aux+=2;
      den = den * aux;
      den_expo= den_expo+2;
      x_expo= x_expo*(x)*(x);
    }

    num=1, den=2, den_expo=3, aux=2,aux2 =3, x_expo=(x)*(x)*(x);
    
    // Almaceno el valor retornado por la funcion recursiva
    float resFinal = serieRecursiva(num, den, den_expo, aux, aux2, x_expo, resultado, frac, x);

    //Imprimo ese valor
    printf(" El valor de la serie es: %f\n", resFinal);

    return 0;
}

//Implementacion de la funcion recursiva
float serieRecursiva(float num, float den, float den_expo, float aux, float aux2, float x_expo, float resultado, float frac, float x){
    if((resultado - frac) < 0.0001){
      return frac;
    }
      frac+=((num)/((den)*(den_expo)))*(x_expo);
      num= num * aux2;
      aux2 += 2;
      aux+=2;
      den = den * aux;
      den_expo= den_expo+2;
      x_expo= x_expo*(x)*(x);
    return serieRecursiva(num, den, den_expo, aux, aux2, x_expo, resultado, frac, x);
}
