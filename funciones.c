#include <stdio.h>
#include "funciones.h"

void areaTriangulo(int base, int altura){
 
    printf("%f",(base*altura)/2,"Fahrenheit");

}

void celsiusAFahrenheit(int celsius){

    printf("%f",(celsius*(9/5))+32,"Fahrenheit");

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
    printf("Calculadora");
    printf("Selecione la letra para escoger: ");
    printf("A. Suma.");
    printf("B. Resta.");
    printf("C. Multiplicacion.");
    printf("D. Division.");
    scantf("%c", &op);

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

    printf("El resultado fue: ", "%i",resultado);

}

void conversionCelsiusAFahrenheitVi(int temperatura){

    char op ;
    double resultado=0;

    printf("Conversion de temperatura");
    printf("Selecione: ");
    printf("A. Celsius a Fahrenheit");
    printf("B. Fahrenheit a Celsius");
    scanf("%c", &op);

    switch (op)
    {
    case 'A':
        resultado = (temperatura*(9/5))+32;
        printf("%f",resultado,"Fahrenheit");
        break;

    case 'B':
        resultado = (temperatura-32)*(5/9);
        printf("%f",resultado,"Celsius");
        break;

    default:
        break;
    }

}

void insertarElementoPosicionDeseadaArreglo(int posicion, int elemnto){

    int arreglo [10];

    for(int i=0, i < 10, i++){

        arreglo[i]=0;

    }

    matriz[posicion-1]=elemnto;

    for(int i=0, i < 10, i++){

        print("%i\t",arreglo[i]);

    }

}

void ImprimaSOYIDIOTA(){

    char arreglo [11] = "Soy idiota";

    prinf("%s",arreglo);

}

void sumaMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]){

    for(int i=0; i<n;i++){
	
		for(int j=0; j<n;j++){
				
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];

		}
	}
}

void restaMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]){

    for(int i=0; i<n;i++){
	
		for(int j=0; j<n;j++){
				
			matrizC[i][j] = matrizA[i][j] - matrizB[i][j];

		}
	}
}

void palindromo(int n,char palabra[n]){

    for (int i = 0; i < n; i++)
    {
        if (palabra[i]==palabra[n-i-1])
        {
            printf("La palabra es palindroma.");
        }else{
            printf("La palabra no es palindroma.");
        }
        
    }
    

}

void cuentaNumeroPalabras(int n,char palabra[n]){

    int cont = 0;

    for (int i = 0; i < n; i++)
    {
        if (palabra[i]==' ')
        {
            cont++;
        }
        
    }
    
    printf("El numero de palabras es: ","%i");

}

