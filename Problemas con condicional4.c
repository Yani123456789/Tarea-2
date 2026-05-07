//Construir un diagrama de flujo que queda determinar,
//dados dos números enteros, si un nùmero es divisor del otro.

#include <stdio.h>
int main()
{
    int a, b;
    double mod;
    
    printf("Escribe el valor del primer número entero (a):");
    scanf("%d", &a);
    printf("Escribe el valor del segundo número entero (b):");
    scanf("%d", &b);
    
    mod=a%b;
    if(mod==0)
    { 
        printf("El entero %d es divisor del entero %d. \n", b, a);
    }
    else
    {
        printf("El entero %d no es divisor del entero %d.", b, a);
    }
    
    return 0;
}
