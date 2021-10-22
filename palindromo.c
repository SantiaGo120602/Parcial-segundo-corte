#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


 int main(){

    int n=5;
    char palabra[5] = "nnann";
    bool x = true;
     

    for (int i = 0; i < n; i++)
    {
        if (palabra[i]==palabra[n-i-1])
        {   
            x = true;         
        }else{

            x = false;
            break;             
        }
        
    }

    if (x==true)
        {            
            printf("La palabra es palindroma.\n");
        }else{
            printf("La palabra no es palindroma.\n");
             
        }

    
 
 }