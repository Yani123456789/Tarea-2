//Construya un diagrama de flujo que lea 100 números naturales 
//y cuente cuántos de ellos son positivos, negativos o nulos.

//Construya un diagrama de flujo que lea 100 números naturales 
//y cuente cuántos de ellos son positivos, negativos o nulos.

#include <stdio.h>
int main()
{
    int cont=0, pos=0, neg=0, nul=0, N;

    while(++cont<=100)
    {
        printf("Ingrese el número:");
        scanf("%u", &N);
        if(N<0)
        {
            neg=neg+1;
        }
        else 
        {
            if(N>0)
            {
                pos=pos+1;
            }
            else
            {
                nul=nul+1;
            }
        }
    }
    printf("Hay %d números positivos, %d números negativos, %d números nulos", pos, neg, nul);
    return 0;
}
