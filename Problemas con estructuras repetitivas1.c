//Haga un diagrama de flujo para obtener la tabla de 
//multiplicar del un número entero N, comenzando desde el 1.

#include <stdio.h>
int main ()
{
  int N, cont=0;
  
  printf("Escribe el número entero:");
  scanf("%d", &N);
  printf("La tabla de multiplicar de %d es: \n", N);
  while (++cont <=10)
    printf("%d x %d = %d\n", N, cont,N*cont);
  return 0;
}
