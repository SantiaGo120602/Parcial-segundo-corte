#include <stdio.h>
#include <stdlib.h>


 int main(){
 
     FILE *archivo;

	archivo = fopen("archivo1.txt", "wt");
    fputs("hola, hola, hola, hola\n", archivo);
    fclose(archivo);
	printf("%p\n",archivo);

 }