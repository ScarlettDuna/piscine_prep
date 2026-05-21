#include <stdio.h>

int suma(int a, int b)
{
  return a + b;
}

int main(void)
{
  int resultado;

  resultado = suma(2, 5);
  printf("Resultado: %d\n", resultado);
  return 0;
}