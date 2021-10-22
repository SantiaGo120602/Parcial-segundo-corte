//Programa que remueve la primera ocurrencia de un caracter en un String.
//autor: Santiago Javier Vivas Piamba
//versión 1.0

#include <stdio.h>

int main()
{
	char ocurrencia;
	char palabra[50];
	printf("Ingrese un texto de máximo 50 caracteres: \n");
	scanf("%[^\n]", palabra);
	printf("Ingrese el caracter, del cual se borrará la primera ocurrencia en la cadena \n");
	scanf("%s", &ocurrencia);
	for (int i=0; i<50; i++)
	{
		if (palabra[i] == ocurrencia){
			palabra[i]=' ';
		}
		else if (palabra[i] != ocurrencia){
			palabra[i]=palabra[i];
		}
	}
	
	printf("El nuevo texto borrando la primera ocurrencia del caracter %s", &ocurrencia);
	printf(" es: \n %s", palabra);
}
