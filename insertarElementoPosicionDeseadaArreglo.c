#include <stdio.h>
#include <stdlib.h>


 int main(){


     int posicion=5, elemento=1;
    int arreglo [10];

    for(int i=0; i<10; i++){

        arreglo[i]=0;

    }

    arreglo[posicion-1]=elemento;

    for(int i=0; i < 10; i++){

        printf("%i\t\n\n",arreglo[i]);

    }
 
 }