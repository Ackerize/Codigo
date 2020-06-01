#include <stdio.h>


#include <stdio.h>

int main()
{ float x, num=1, den=2, den_expo=3, aux=2,aux2 =3, x_expo, frac, resultado=0;
    
    do{
    printf("Introduce un valor de X (que sea x<1)\n");
    scanf("%f", &x);
    }while(x>1);

    x_expo=(x)*(x)*(x);
    frac = x;

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

    do{
        frac+=((num)/((den)*(den_expo)))*(x_expo);
        num= num * aux2;
        aux2 += 2;
        aux+=2;
        den = den * aux;
        den_expo= den_expo+2;
        x_expo= x_expo*(x)*(x);
    }while((resultado - frac) >= 0.001);
    
    printf(" El valor de la serie es: %f\n", frac);

    return 0;
}
