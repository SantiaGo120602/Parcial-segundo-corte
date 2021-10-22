#include <stdio.h>
#include <stdlib.h>


 int main(){
 
     int num1=9, num2=7, num3=5;

     if (num1>=num2 && num1>=num3)
    {
        printf("El mayor es: %i\t\n", num1); 

    }else if (num2>=num1 && num2>=num3)
    {
        printf("El mayor es: %i\t\n", num2);

    }else if (num3>=num1 && num3>=num2)
    {
        printf("El mayor es: %i\t\n", num3);
    }

 }