#include <stdio.h>
#include <stdlib.h>


 int main(){
 
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