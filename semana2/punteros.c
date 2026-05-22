#include<stdio.h>

int main(void)
{
  int numero = 42;
  int *puntero = &numero;
  // & — operador de dirección. "Dame la dirección de esta variable."
  // * — operador de desreferencia. "Dame el valor que hay en esta dirección."

  printf("Valor de número: %d\n", numero);
  printf("Dirección de número: %p\n", &numero);
  printf("Valor del puntero: %p\n", puntero);
  printf("Valor al que apunta el puntero: %d\n", *puntero);
  return 0;
}