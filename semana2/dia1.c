#include<stdio.h>

int main(void)
{
  char saludo[] = "hola";
  // equivale a: {'h', 'o', 'l', 'a', '\0'}
  // tiene 5 elementos, no 4

  printf("El string: %s\n", saludo);
  printf("Primer caracter: %c\n", saludo[0]);
  printf("Último caracter visible: %c\n", saludo[3]);
  printf("Longitud con sizeof: %lu\n", sizeof(saludo));
  return 0;
}

