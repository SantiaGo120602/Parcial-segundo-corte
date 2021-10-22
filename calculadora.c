#include <stdio.h>
#include <stdlib.h>


 int main(){

    int num1 =5, num2=5;
    char op ;
    int resultado=0;
    printf("Calculadora");
    printf("Selecione la letra para escoger: \n");
    printf("1. Suma.\n");
    printf("2. Resta.\n");
    printf("3. Multiplicacion.\n");
    printf("4. Division.\n");
    scanf("%c", &op);

    switch (op)
    {
    case '1':
        resultado = num1+num2;
        break;

    case '2':
        resultado = num1-num2;
        break;

    case '3':
        resultado = num1*num2;
        break;

    case '4':
        resultado = num1/num2;
        break;
    
    default:
        break;
    }

    printf("El resultado fue: %i \n",resultado);

 
 }