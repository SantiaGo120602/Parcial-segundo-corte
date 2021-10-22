#include <stdio.h>
#include <stdlib.h>


 int main(){

    int n=8;
    char palabra[8]= "cocoloco";
    char caracter = 'o';
    int cont=0;

    for (int i = 0; i < n; i++)
    {
        if (palabra[i]==caracter)
        {
            cont++;
        }
        
    }
    
    printf("El numero de repeticiones del caracter en esta palabra es: %i\n",cont);

 
 }