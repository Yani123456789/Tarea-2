//Escribir un diagrama de flujo tal que dado como entrada 
//un arreglo unidimensional de enteros, obtenga como 
//resultado la suma de los mismos.

//Escribir un diagrama de flujo tal que dado como entrada 
//un arreglo unidimensional de enteros, obtenga como 
//resultado la suma de los mismos.

#include <stdio.h>
int main ()
{
    int sum=0;  
    int lista[1000]; // Se declara el arreglo unidimensional
    int indice=0;
    int numeroElementos=0;
    printf("\nDa un número entre 1 e infinito para indicar la cantidad de elementos que tiene el arreglo\n");
    scanf("%d",&numeroElementos);
    if((numeroElementos>=1) && (numeroElementos<=100000))
    {
// Se almacena un número en cada elemento del arreglo unidimensional usando for
        for (indice = 0 ; indice <= numeroElementos-1 ; indice++)
         {
                printf("\nDar un número entero para el elemento %d del arreglo ", indice );
                 scanf("%d",&lista[indice]);
                 sum=sum+lista[indice];
         }
         printf("La suma es: %d\n", sum);
 // Se muestra el número almacenado en cada elemento del arreglo unidimensional usando for
       
 }
 else printf("el valor dado no es válido");
 printf("\n");
 return 0;
}
