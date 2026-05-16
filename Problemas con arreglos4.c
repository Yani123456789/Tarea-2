//Construir un diagrama de flujo para almacenar en un arreglo 
//unidimensional los 100 primeros números pares. Imprima al 
//final el arreglo.

#include <stdio.h>
int main ()
{
    int par=0;
    int lista[100];
    int indice=0;
    for (indice = 0 ; indice <= 100-1 ; indice++)
    {
        par=par+2;
        lista[indice]=par;
    }
    printf("\nLos 100 primeros números pares son: \n");
    for (indice = 0 ; indice <= 100-1 ; indice++)
    {
        printf("%d ", lista[indice]);
    }
    printf("\n");
    return 0;
}
