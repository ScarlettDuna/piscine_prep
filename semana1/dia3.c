#include<stdio.h>

// Factorial(n)
int factorial(int n)
{
  // ¿Comprobación de número negativo? Levantar un error? igualar a 0?
  int factorial;
  if (n == 0)
    factorial = 0;
  else 
  {
    factorial = 1;
    for (int i = n; i >= 1; i --)
      factorial = factorial * i;
  }
  return factorial;
}
// Potencia(base, exp)
int potencia(int base, int exp)
{
  int resultado = base;
  for (int i = exp; i > 1; i --)
    resultado = resultado * base;
  return resultado;
}

// Fibonacci(n)
int fibonacci(int n)
{
  int resultado;
  if (n == 0)
    resultado = 0;
  else if (n == 1)
    resultado = 1;
  else
    resultado = fibonacci(n-1) + fibonacci(n-2);
  return resultado;
}

int main(void)
{
  printf("El resultado del factorial de 5 es %d\n", factorial(5));
  printf("El resultado de 3 a la potencia de 4 es %d\n", potencia(3, 4));
  printf("El resultado de la secuencia de Fibonacci al 10 es %d\n", fibonacci(10));
  return 0;
}