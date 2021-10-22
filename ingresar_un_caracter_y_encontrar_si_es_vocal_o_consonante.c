//Programa al que se le ingresa un caracter y se determina si es vocal o consonante.
//autor: Santiago Javier Vivas Piamba
//versión 1.0

#include <stdio.h>

int main()
{

	char caracter;
	
	
	printf("Este es un programa al que se le ingresa un caracter y, de ser una letra, se determina si es vocal o consonante. Por favor ingrese el caracter: \n");
	caracter = getchar();
	
	if (caracter=='a' || caracter=='e' || caracter=='i' || caracter=='o' || caracter=='u'){
		printf("el caracter ingresado es una vocal. \n");
	}
	else if (caracter=='b' || caracter=='c' || caracter=='d' || caracter=='f' || caracter=='g' || caracter=='h' || caracter=='j' || caracter=='k' || caracter=='l' || caracter=='m' || caracter=='n' || caracter=='p' || caracter=='q' || caracter=='r' || caracter=='s' || caracter=='t' || caracter=='v' || caracter=='w' || caracter=='x' || caracter=='y' || caracter=='z'){
		printf("el caracter ingresado es una consonante. \n");
	}
	else{
		printf("el caracter ingresado no es válido. \n");
	}
	
	
	return 0;
}
