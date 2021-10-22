#include <stdio.h>
#include <stdlib.h>


 int main(){

    int n=14;
    char palabra[14]="hola como esta";
    int cont = 1;

    for (int i = 0; i < n; i++)
    {
        if (palabra[i]==' ')
        {
            cont++;
        }
        
    }
    
    printf("El numero de palabras es: %i\n",cont);

}
