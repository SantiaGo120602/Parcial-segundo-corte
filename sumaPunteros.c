#include <stdio.h>
#include <stdlib.h>


 int main(){
 
     int *c, *d;
    int a;
    int b;
    c=&a;
    d=&b;

    printf("Ingrese el numero 1: ");
    scanf("%d", &a);
    printf("Ingrese el numero 2: ");
    scanf("%d", &b);

    printf("la suma fue: %d\n",(*c+*d));

 }