//En una Casa Cabio necesitan construir un programa que dado 
//como dato una cantidad expresada en dólares, convierta esa 
//cantidad en pesos. Construir el diagrama de flujo correspondiente. 
//Tomar en cuenta que: 1dolar=11.96pesos

#include <stdio.h>
int main ()
{
   float dolares;
   double pesos,peso=11.96;
   
   printf("Escribe la cantidad en dolares:");
   scanf("%f", &dolares);
   
   pesos=dolares*peso;
   printf("La cantidad en pesos es: %f\n", pesos);
   
   return 0;
}
