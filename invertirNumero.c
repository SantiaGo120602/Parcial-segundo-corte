#include <stdio.h>
#include <stdlib.h>


 int main(){

    int numero = 123;

    int inver=0;

    while(numero>0){

    inver = inver * 10 + (numero % 10);
    numero = numero / 10;

    }

    printf("El numero invetido es: %i\t\n", inver);
 
 }