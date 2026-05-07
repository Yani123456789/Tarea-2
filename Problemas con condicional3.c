//Hacer un diagrama de flujo para calcular el precio de ida y vuelta en 
//ferrocarril, conociendo la distancia de ida y el tiempo de estancia. 
//También se sabe que si el número de días de estancia es mayor a 7 y la 
//distancia total (ida y vuelta) a recorrer es mayor a 800 km, el ticket 
//tiene un descuento del 30%. El precio por km es de $0.23.

#include <stdio.h>
int main()
{ 
    float ida, dt, tiempo;
    double descuento, precio, final;
    
    printf("Indica la distancia de ida:");
    scanf("%f", &ida);
    printf("Indica el tiempo de estancia:");
    scanf("%f", &tiempo);
    
    dt=2*ida;
    precio=dt*0.23;
    if(dt>800)
    {
        if(tiempo>7)
        {
          descuento=precio*0.3;
          final=precio-descuento;
          printf("El precio es: %f\n", final);
        }
        else
        {
            printf("El precio es: %f\n", precio);
        }
    }
    else
    {
        printf("El precio es: %f\n", precio);
    }
    
    return 0;
}
