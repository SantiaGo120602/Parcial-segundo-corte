#include <stdio.h>
#include "funciones.h"

double areaTriangulo(int base, int altura){
 
    return (base*altura)/2;

}

double celsiusAFahrenheit(int celsius){

    return (celsius*(9/5))+32;

}

void mayorTresNumeros(int num1, int num2,int num3){

    if (num1<=num2 && num1<=num3)
    {
        printf("El menor es: ","%i\t", num1); 

    }else if (num2<=num1 && num2<=num3)
    {
        printf("El menor es: ","%i\t", num2);

    }else if (num3<=num1 && num3<=num2)
    {
        printf("El menor es: ","%i\t", num3);
    }
    
}

void parImpar(int numero){

    if (numero%2==0)
    {
        prinf("Es par");
    
    }else{

        printf("Es impar");

    }
    

}

void invertirNumero(int numero){
    int inver=0;

    while(numero>0){

    inver = inver * 10 + (numero % 10);
    numero = numero / 10;

    }

    printf("El numero invetido es: ","%i\t", inver);

}

void tablasMultiplicar(int numero){

    prinf("La tabla del numero","%i",numero,"es:");

    for (int i = 0; i <= 10; i++)
    {
        
        printf("%i\t", numero*i);

    }
    

}

void calculadora(int num1, int num2){

    char op ;
    int resultado=0;
    prinf("Calculadora");
    prinf("Selecione la letra para escoger: ");
    prinf("A. Suma.");
    prinf("B. Resta.");
    prinf("C. Multiplicacion.");
    prinf("D. Division.");
    scanf("%c", &op);

    switch (op)
    {
    case 'A':
        resultado = num1+num2;
        break;

    case 'B':
        resultado = num1-num2;
        break;

    case 'C':
        resultado = num1*num2;
        break;

    case 'D':
        resultado = num1/num2;
        break;
    
    default:
        break;
    }

    prinf("El resultado fue: ", "%i",resultado);

}


