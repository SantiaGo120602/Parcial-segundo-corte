//Programa que determina si un número es palíndromo o no.
//autor: Santiago Javier Vivas Piamba
//versión 1.0

#include <stdio.h>

int main()
{

	int n;
	int q;
	int r;
	int resultado=0;
	
	printf("Este es un programa que determina si un número es palíndromo o no. Por favor ingrese el número: \n");
	scanf("%d", &n);
	
	q = n;
	do{
		r = q%10;
		resultado = resultado*10 + r;
		q = q/10;
	}while(q!=0);
	
	if (resultado == n){
		printf("El número ingresado es palíndromo. \n");
	}
	else{
		printf("El número ingresado NO es palíndromo. \n");
	}
	
	
	
	return 0;
}
