*/Escriba un diagrama de flujo tal que dado como datos dos números y 
calcular la suma, resta y multiplicación de dichos números./+

#include <stdio.h>

int main() 
{
  int a,b,sum,res,mul;

  printf("Ingrese el primer valor entero (a):");
  scanf("%i", &a);
  printf("Ingrese el segundo valor entero (b):");
  scanf("%i", &b); 
  
  sum=a+b;
  printf("La suma es a+b=(%d)\n", sum);
  res=a-b;
  printf("La resta es a-b=(%d)\n", res);
  mul=a*b;
  printf("La multiplicación es a*b=(%d)\n", mul);

  return 0;
}
