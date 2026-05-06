//Una persona invierte en un banco una determinada cantidad
//de dinero y a una cierta tasa de interés mensual. 
//Construya un diagrama de flujo que permita obtener el monto
//de dinero que obtendrá al finalizar el mes.

#include <stdio.h>
int main ()
{
    float dinero,interes;
    double monto, final;
    
    printf("Escribe la cantidad de dinero:");
    scanf("%f", &dinero);
    printf("Escribe la tasa de interés:");
    scanf("%F", &interes);
    
    monto=dinero*interes/100;
    final=dinero+monto;
    printf("El monto de dinero que obtendrá al finalizar el mes es de: %f\n", final);
    
    return 0;
}
