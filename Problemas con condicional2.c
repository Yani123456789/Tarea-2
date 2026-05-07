//Dado como dato el sueldo de un trabajador considere
//un aumento del 15% si un sueldo es inferior a $1000 
//y de un 12% en caso contrario. Imprimir el sueldo con
//el aumento incorporado. Hacer el diagrama de flujo correspondiente.

#include <stdio.h>
int main ()
{
    float sueldo;
    double descuento, final;
    
    printf("Escribe el sueldo:");
    scanf("%f", &sueldo);
    
    if(sueldo<1000)
    { 
        descuento=sueldo*0.15;
        final=sueldo+descuento;
        printf("El sueldo final es: %f\n", final);
    }
    else
    {
        descuento=sueldo*0.12;
        final=sueldo+descuento;
        printf("El sueldo final es: %f\n", final);
    }
    return 0;
}
