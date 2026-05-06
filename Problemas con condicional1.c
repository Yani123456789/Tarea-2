//En un negocio de productos electrodomésticos 
//aplican un descuento del 8% a todos aquellos
//clientes cuya compra es superior a $2500. Dado como 
//dato el monto de la compra del cliente, calcule lo que 
//el cliente debe pagar. Hacer el diagrama de flujo.

#include <stdio.h>

int main() 
{
   float compra;
   double descuento, pagar;
   
   printf("Escribe el monto de la compra:");
   scanf("%f", &compra);
   
   if(compra>2500)
      {
       descuento=compra*0.08;
       pagar=compra-descuento;
       printf("La cantidad a pagar es: %f\n", pagar);
      }
   else
   {
       printf("La cantidad a pagar es: %f\n", compra);
   }
   return 0;
}
