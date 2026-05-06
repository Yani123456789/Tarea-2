//Construir un diagrama de flujo tal que dado el radio de un círculo,
//calcule e imprima el área y la circunferencia. El área del círculo 
//se calcula como Area= π ∗ radio^2 y la circunferencia se calcula como
//Circunferencia= 2∗π ∗ radio.

#define _USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>
int main()
{
    int radio;
    double area, circunferencia;

    printf("Escriba el valor del radio:");
    scanf("%d", &radio);
      
    area=M_PI*(radio*radio);
    printf("El area es: %f\n", area);
    
    circunferencia=M_PI*2*radio;
    printf("La circunferencia es: %f\n", circunferencia);
    
    return 0;
}
