//Hacer un diagrama de flujo que calcule la suma de 
//los números pares comprendidos entre el 10 y 50.

#include <stdio.h>
int main()
{
    int cont=10, sum=0;
    
    while(cont<=50)
    {
        if(cont%2==0)
        {
            sum=cont+sum;
        }
        cont++;
    }
        printf("La suma de los números pares comprometidos entre 10 y 50 es %d\n", sum);
}
