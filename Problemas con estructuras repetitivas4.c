//Hacer un diagrama de flujo que calcule e imprima el 
//producto de los N primeros números naturales.

#include <stdio.h>
int main ()
{
    int N, prim, cont=0, prod=1, mul;
    printf("Escribe la cantidad de números: ");
    while(cont<=N)
    {
        mul=prod*(prod+2);
        prod=prod+2;
        scanf("%i", &prod);
    }
    printf("El producto de los %d números naturales es: ", mul);
    return 0;
}
