#include <stdio.h>
#include <stdlib.h>


 int main(){

    double temperatura = 40;
    char op ;
    double resultado;

    printf("Conversion de temperatura\n");
    printf("Selecione: \n");
    printf("1. Celsius a Fahrenheit.\n");
    printf("2. Fahrenheit a Celsius.\n");
    scanf("%c", &op);

    switch (op)
    {
    case '1':
        resultado = (temperatura*1.8)+32;
        printf("%f Fahrenheit \n",resultado);
        break;

    case '2':
        resultado = (temperatura-32)*(0.5555555555);
        printf("%f Celsius\n",resultado);
        break;

    default:
        break;
    }

    
 
 }