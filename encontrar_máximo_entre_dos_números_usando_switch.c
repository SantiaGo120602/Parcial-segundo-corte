//Programa que calcula el máximo de dos números usando switch.
//autor: Santiago Javier Vivas Piamba
//versión 1.0

#include <stdio.h>
#include <math.h>

int main()
{

	float numero1;
	float numero2;
	float *n1=&numero1;
	float *n2=&numero2;
	int mayor;
	
	printf("Este es un programa para calcular el máximo de dos números usando switch. Ingrese el número 1: \n");
	scanf("%f", n1);
	printf("Ingrese el número 2: \n");
	scanf("%f", n2);
	if (numero1 == numero2){
		mayor = 0;
	}
	else if (numero1 > numero2){
		mayor = 1;
	}
	else if (numero2 > numero1){
		mayor = 2;
	}
	switch(mayor)
	{
		case 0:
			printf("Los números son iguales.\n" );
			break;
		case 1:
			printf("El número mayor es el número: %E\n", numero1);
			break;
		case 2:
			printf("El número mayor es el número: %E\n", numero2);
			break;
		default:
			printf("Datos ingresados de forma incorrecta. \n");
			break;
	}
	
	return 0;
}
