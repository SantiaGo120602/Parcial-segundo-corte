//Programa que pasa una cadena de minúsculas a mayúsculas.
//autor: Santiago Javier Vivas Piamba
//versión 1.0

#include <stdio.h>
#include <ctype.h>

int main()
{
	
	char palabra[50];
	char palabra2[50];
	printf("Ingrese una cadena de máximo 50 caracteres: \n");
	scanf("%s", palabra);
	
	for (int i=0; i<50; i++)
	{
		palabra2[i] = toupper(palabra[i]);
	}
	
	
	printf("La cadena en mayúsculas es: \n %s", palabra2);

}
