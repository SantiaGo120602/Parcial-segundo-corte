//Programa que pone los números pares e impares de un arreglo en otros 2 arreglos separados.
//autor: Santiago Javier Vivas Piamba
//versión 1.0

#include <stdio.h>

int main()
{

	int n=0;
	
	
	printf("Ingrese el tamaño de su arreglo: \n");
	scanf("%d", &n);
	int array1[n];
	int array2[n];
	int array3[n];
	int ar2=0;
	int ar3=0;
	for (int i = 0; i<n; i++)
	{
		printf("Ingrese el número que va en la posición %d", i);
		printf(": \n");
		scanf("%d", &array1[i]);
		if (array1[i]%2==0){
			array2[i]=array1[i];
			ar2 +=1;
		}
		else if (array1[i]%2!=0){
			array3[i]=array1[i];
			ar3 +=1;
		}
	}
	
	printf("Arreglo de números pares: \n");
	for (int i = 0; i<ar2; i++)
	{
		printf("%d", array2[i]);
	}
	printf("\n");
	printf("Arreglo de números impares: \n");
	for (int i = 0; i<ar3; i++)
	{
		printf("%d", array3[i]);
	}
	printf("\n");
	return 0;
}
