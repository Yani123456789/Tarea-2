//Hacer un diagrama de flujo que calcule e imprima el 
//producto de los N primeros números naturales.

#include <stdio.h>
int main ()
{
    int N, cont=1, mul=1;
    printf("Escribe la cantidad de números: ");
    scanf("%i", &N);
    while(cont<=N)
    {
        mul=mul*cont;
        cont++;
    }
    printf("El producto de los %d números naturales es: %d\n", N, mul);
    return 0;
}
