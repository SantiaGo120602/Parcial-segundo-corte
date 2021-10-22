#include <stdio.h>
#include <stdlib.h>


 int main(){

    int n=5;
    int matrizA[n][n], matrizB[n][n], matrizC[n][n];

    for(int i=0; i<n;i++){
	
		for(int j=0; j<n;j++){
			
            matrizA[i][j] = 2*(j-i);
		
		}
	}

     for(int i=0; i<n;i++){
	
		for(int j=0; j<n;j++){
			
            matrizB[i][j] = 2*(j-i);
		
		}
	}

     for(int i=0; i<n;i++){
	
		for(int j=0; j<n;j++){
			
            matrizC[i][j] = 2*(j-i);
		
		}
	}

    for(int i=0; i<n; i++){
	
		for(int j=0; j<n;j++){
				
			matrizC[i][j] = matrizA[i][j] - matrizB[i][j];

		}
	}

    for(int i=0; i<n;i++){
	
		for(int j=0; j<n;j++){
			
            printf("%i\t", matrizC[i][j]);
		
		}
		printf("\n");
	}
 
 }