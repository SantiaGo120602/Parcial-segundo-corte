#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

 int main(){

    //capricornio
    int matrizA[5][5],  matrizB[5][5],  matrizC[5][5];
    char palabra[9]="cocodrilo";
    char palabra1[15]="hola como estas";
    char caracter = 'o';
    

    inicializacionMatriz(5, matrizA);
    inicializacionMatriz(5, matrizB);
    inicializacionMatriz(5, matrizC);
    areaTriangulo(5, 9);
    celsiusAFahrenheit(20);
    mayorTresNumeros(5, 3, 7);
    parImpar(6);
    invertirNumero(895);
    tablasMultiplicar(9);
    calculadora(12, 6);
    conversionCelsiusAFahrenheitVi(30);
    insertarElementoPosicionDeseadaArreglo(2, 4);
    ImprimaSOYIDIOTA();
    sumaMatrices(5,  matrizA,  matrizB,  matrizC);
    restaMatrices( 5,  matrizA,  matrizB,  matrizC);
    palindromo( 9, palabra);
    cuentaNumeroPalabras( 15, palabra1);
    cuenteAparicionesCaracterString( 9, palabra, caracter);
    encuentraCaracterFrecuenciaMasAlta( 9, palabra);
    imprimirMatrizRecursiva(5, 0,  0,  matrizA);
    creeArchivoEscribaCierreArchivo();
    agregarContenidoArchivo();
    sumaPunteros();
    clasificacionBurbuja();
    busquedaBinaria();

}
