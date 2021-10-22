//Programa que usa una función que calcula el cubo de un número ingresado.
//autor: Santiago Javier Vivas Piamba
//versión 1.0

#include <stdio.h>
#include <ctype.h>

void cubo(float base){

float cubo = base* base * base;
printf("El cubo del número %f", base);
printf(" es %f \n", cubo);
}

int main()
{
	
	float base1;
	printf("Ingrese el número cuyo cubo desea conocer: \n");
	scanf("%f", &base1);
	
	cubo(base1);

}
