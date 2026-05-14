//Construya un programa tal que dado como entrada un 
//arreglo unidimensional de enteros y un número entero, 
//determine cuántas veces se encuentra el número dentro del arreglo.

#include <stdio.h>
int main ()
{
    int veces=0, entero;
    int lista[10000];
    int indice=0;
    int numeroElementos=0;
    printf("\nIndica la cantidad de elementos que tiene el arreglo\n");
    scanf("%d", &numeroElementos);
    printf("Escribe un número entero: ");
    scanf("%d", &entero);
    if((numeroElementos>=1) && (numeroElementos<=10000))
    {
        for(indice=0; indice <= numeroElementos-1; indice++)
        {
            printf("\nDar un número entero para el elemento %d del arreglo: ", indice);
            scanf("%d", &lista[indice]);
            if(lista[indice]==entero)
            {
                veces=veces+1;
            }
            else
            {
                veces=veces+0;
            }
        }
        printf("El entero %d aparece %d veces \n", entero, veces);
    }
    else printf("el valor dado no es válido");
    printf("\n");
    return 0;
}
