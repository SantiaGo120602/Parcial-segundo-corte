#include <stdio.h>
#include <stdlib.h>


 int main(){

    FILE *archivo;

	archivo = fopen("archivo2.txt", "at");
    fputs("agregue esto a un archivo\n", archivo);
    fclose(archivo);
	printf("%p\n",archivo);
 
 }