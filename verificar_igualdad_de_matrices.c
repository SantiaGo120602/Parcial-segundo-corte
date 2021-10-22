//Programa que verifica si dos matrices son iguales o no.
//autor: Santiago Javier Vivas Piamba
//versión 1.0

#include <stdio.h>

int main()
{

	int matriz1[3][3];
	int matriz2[3][3];
	int contar = 0;
	
	
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			printf("Para la matriz 1, ingrese el número que va en la posición %d %d", i, j);
			scanf("%d", &matriz1[i][j]);
		}
	}
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			printf("Para la matriz 2, ingrese el número que va en la posición %d %d", i, j);
			scanf("%d", &matriz2[i][j]);
		}
	}
	
	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{
			if (matriz1[i][j]==matriz2[i][j])
			{
				contar += 1;
			}
			else if(matriz1[i][j]!=matriz2[i][j])
			{
				contar += 0;
			}
		}
	}
	if (contar == 9){
		printf("Las matrices son iguales \n");
	}
	else if (contar != 9){
		printf("Las matrices no son iguales \n");
	}
}
