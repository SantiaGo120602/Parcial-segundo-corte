#include <stdio.h>
#include <stdlib.h>


 int main(){

    int n=8;
    char palabra[8]="cocoloco";
    int cont=0;
    int frecuencia = 0;
    char caracter;
    char caracter1;

    for (int i = 0; i < n; i++)
    {

        caracter = palabra[i]; 

        for (int j = 0; j < n; j++){

        if (caracter ==palabra[j])
        {
            cont++;
        }
        

        }

        if (cont>frecuencia)
        {
            frecuencia=cont;
            caracter1=caracter;

        }

    }
    
    printf("El caracter con mas frecuencia es: %c\n",caracter1);

 
 }