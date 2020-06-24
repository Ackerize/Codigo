#include<stdio.h>

struct complejo{
	float real,imaginaria;
}z1,z2;


void pedirDatos();
void suma(struct complejo,struct complejo);
void multiplicacion(struct complejo,struct complejo);

int main(){
	pedirDatos();
	multiplicacion(z1, z2);
	return 0;
} 

void pedirDatos(){
	printf("Digite el primer numero complejo: \n");
    
	printf("Digite la parte real: "); scanf("%f", &z1.real);
	printf("Digite la parte imaginaria: "); scanf("%f", &z1.imaginaria);
	printf("\n");
	printf("Digite el segundo numero complejo: \n");
	printf("Digite la parte real: "); scanf("%f", &z2.real);
	printf("Digite la parte imaginaria: "); scanf("%f", &z2.imaginaria);
}

void multiplicacion(struct complejo z1,struct complejo z2){
  float real = (z1.real * z2.real) - (z1.imaginaria * z2.imaginaria);
  float imaginario = (z1.real * z2.imaginaria) + (z2.real * z1.imaginaria);
	z1.real = real;
	z1.imaginaria = imaginario;
	printf("La multiplicacion es: %f , %f j", z1.real, z1.imaginaria);
}

void suma(struct complejo z1,struct complejo z2){
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;
	printf("La suma es: %f , %f j", z1.real, z1.imaginaria);
}

