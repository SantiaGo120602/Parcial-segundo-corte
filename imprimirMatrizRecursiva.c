#include <stdio.h>
#include <stdlib.h>

void imprimirMatrizRecursiva(int n,int i, int j, int matriz[n][n]){

    printf("%i\t\n", matriz[i][j]);

    if(n>j){
    
    imprimirMatrizRecursiva(n,i+1,j+1,matriz);

    }


}

 int main(){

    int n=5, i=0, j=0, matriz[5][5];

    for(int i=0; i<n;i++){
	
		for(int j=0; j<n;j++){
			
            matriz[i][j] = 2*(j-i);
		
		}
	}

    imprimirMatrizRecursiva(n,i, j, matriz);
 
 }