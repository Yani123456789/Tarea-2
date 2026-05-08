//Hacer un diagrama de flujo que calcule la suma de 
//los números pares comprendidos entre el 10 y 50.

#include <stdio.h>
int main()
{
    float sum=0, mod;
    int cont=10;
    
    while(++cont<=50)
    {
        mod=cont%2;
        if(mod=0)
        {
            sum=cont+sum;
            scanf("%f", &sum);
        }
        else
        {
            sum=sum;
            scanf("%f", &sum);
        }
    }
    printf("La suma de los números pares comprometidos entre 10 y 50 es %f", sum);
    return 0;
}
