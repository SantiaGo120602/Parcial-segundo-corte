#include <stdio.h>
#include <stdlib.h>


 int main(){
 
     int numero = 9;

     printf("La tabla del numero %i es: ",numero);

    for (int i = 0; i <= 10; i++)
    {
        
        printf("%i\t\n", numero*i);

    }

 }