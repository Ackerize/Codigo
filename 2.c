#include<stdio.h>

struct complejo{
	float real,imaginaria;
}z1,z2;

void pedirDatos();
void suma(struct complejo,struct complejo);
void muestra(struct complejo);



int main(){
	pedirDatos();
	suma(z1,z2);
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

void suma(struct complejo z1,struct complejo z2){
	z1.real = (z1.real + z2.real) - (z1.imaginaria + z2.imaginaria);
	z1.imaginaria += z2.imaginaria;
	printf("La suma es: %f , %f j", z1.real, z1.imaginaria);
}

void multiplicacion(struct complejo z1,struct complejo z2){
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;
	printf("La suma es: %f , %f j", z1.real, z1.imaginaria);
}
