//Escribir un diagrama de flujo tal que dado como entrada un 
//arreglo unidimensional de enteros, determinar cuántos de 
//ellos son positivos, negativos o nulos.

#include <stdio.h>
int main ()
{
    int nul=0, pos=0, neg=0;
    int lista[10000];
    int indice=0;
    int numeroElementos=0;
    printf("\nIndice la cantidad de elementos que tiene el arreglo\n");
    scanf("%d", &numeroElementos);
    if((numeroElementos>=1) && (numeroElementos<=10000))
    {
        for(indice=0; indice <= numeroElementos-1; indice++)
        {
            printf("\nDar un número entero para el elemento %d del arreglo: ", indice);
            scanf("%u", &lista[indice]);
            if(lista[indice]<0)
            {
                neg=neg+1;
            }
            else 
            {
                if(lista[indice]>0)
                {
                    pos=pos+1;
                }
                else
                {
                    nul=nul+1; 
                }
            }
        }
        printf("La cantidad de números nulos es %d, la cantidad de número positivos es %d y la cantidad de números negativos es %d\n", nul, pos, neg);
    }
    else printf("el valor dado no es válido");
    printf("\n");
    return 0;
}
