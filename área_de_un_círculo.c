//Programa que calcula el área de un círculo usando el radio.
//autor: Santiago Javier Vivas Piamba
//versión 1.0

#include <stdio.h>
#include <math.h>

int main()
{

	float radio;
	float area;
	float *r = &radio;
	
	printf("Este es un programa para calcular el área de un círculo utilizando el radio. Por favor ingrese el radio: \n");
	scanf("%f", r);
	
	area = M_PI * radio * radio;
	
	printf("El area del círculo equivale a: %f", area);
	printf("\n");
	
	return 0;
}
