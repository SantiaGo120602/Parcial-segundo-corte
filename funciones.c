#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void inicializacionMatriz(int n, int matrizA[n][n]){

    for(int i=0; i<n;i++){
	
		for(int j=0; j<n;j++){
			
            matrizA[i][j] = 2*(j-i);
		
		}
	}
}

void areaTriangulo(int base, int altura){
 
    printf("%f\n",(base*altura)/2);

}

void celsiusAFahrenheit(int celsius){

    printf("%f Fahrenheit",(celsius*(9/5))+32);

}

void mayorTresNumeros(int num1, int num2,int num3){

    if (num1<=num2 && num1<=num3)
    {
        printf("El menor es: %i\t", num1); 

    }else if (num2<=num1 && num2<=num3)
    {
        printf("El menor es: %i\t", num2);

    }else if (num3<=num1 && num3<=num2)
    {
        printf("El menor es: %i\t", num3);
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

    printf("La tabla del numero %i es: ",numero);

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

    printf("El resultado fue: %i",resultado);

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
        printf("%f Fahrenheit \n",resultado);
        break;

    case 'B':
        resultado = (temperatura-32)*(5/9);
        printf("%f Celsius\n",resultado);
        break;

    default:
        break;
    }

}

void insertarElementoPosicionDeseadaArreglo(int posicion, int elemnto){

    int arreglo [10];

    for(int i=0; i<10; i++){

        arreglo[i]=0;

    }

    arreglo[posicion-1]=elemnto;

    for(int i=0; i < 10; i++){

        print("%i\t",arreglo[i]);

    }

}

void ImprimaSOYIDIOTA(){

    char arreglo [] = "Soy idiota";

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
    
    printf("El numero de palabras es: %i",cont);

}

void cuenteAparicionesCaracterString(int n, char palabra[n], char caracter){

    int cont=0;

    for (int i = 0; i < n; i++)
    {
        if (palabra[i]==caracter)
        {
            cont++;
        }
        
    }
    
    printf("El numero de repeticiones del caracter en esta palabra es: %i",cont);

}

void encuentraCaracterFrecuenciaMasAlta(int n, char palabra[n]){

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
    
    printf("El caracter con mas frecuencia es: %c",caracter1);

}

void imprimirMatrizRecursiva(int n,int i, int j, int matriz[n][n]){

    printf("%i\t", matriz[i][j]);

    if(n>j){
    
    imprimirMatrizRecursiva(n,i+1,j+1,matriz[n][n]);

    }


}

void creeArchivoEscribaCierreArchivo(){

    FILE *archivo;

	archivo = fopen("archivo1.txt", "wt");
    fputs("hola, hola, hola, hola\n", archivo);
    fclose(archivo);
	printf("%p\n",archivo);

}

void agregarContenidoArchivo(){

    FILE *archivo;

	archivo = fopen("archivo2.txt", "at");
    fputs("agregue esto a un archivo\n", archivo);
    fclose(archivo);
	printf("%p\n",archivo);

}

void sumaPunteros(){

    int *c, *d;
    int a;
    int b;
    c=&a;
    d=&b;

    printf("Ingrese el numero 1: ");
    scanf("%d", &a);
    printf("Ingrese el numero 2: ");
    scanf("%d", &b);

    printf("la suma fue: %d",(*c+*d));

}

void clasificacionBurbuja(){

    int lista[5]={5,2,4,1,3};
	int n, l=5,i,temp;
    int j;

	for(j=0;j<5;j++){
    
        printf("\t%d", *(lista+j));
    
    }
    printf("\n");


	do{
		n=0;
		
		for(i=1;i<l;i++){
			
			if(*(lista+i-1)>*(lista+i)){
				
				temp=*(lista+i-1);
				*(lista+i-1)=*(lista+i);
				*(lista+i)=temp;
				n=i;
				
			}
		}
		l=n;
	}while(n!=0);

    
    for(j=0;j<5;j++){
        
        printf("\t%d", *(lista+j));
        
    }
    printf("\n");

}

void busquedaBinaria(){

    int i, buscar, lista[100], mitad;
    int a = 0;
    int b = 100;
    int contadorA = 0;
    int contadorB = 0;

    for( i = 0; i <= 100; i++){
        lista[i] = i * 2;
    }

    for(i = 0; i <= 100; i++){
        printf("%d  ", lista[i]);
        if( i % 10 == 0 && i != 0)
        printf("\n");
    }

    printf("Ingresa un numero a buscar: ");
    scanf("%d", &buscar);

    while (a <= b){
        contadorA++;
        mitad = (a + b) / 2;

        if(buscar > 200){
        printf("Numero no encontrado\n");
        break;
        }

        if(buscar == lista[mitad]){
        printf("Numero %d encontrado en posicion %d\n", lista[mitad], mitad);
        break;
        }
        else if(buscar < lista[mitad]){
        b = mitad -1;
        }
        else{
        a = mitad + 1;
        }
        contadorB++;

    }

    if(contadorA == contadorB){
    printf("Numero no encontrado\n");
}


