#include<stdio.h>
#include<string.h>
void ft_swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

char *ft_strdup(char *src)
{
  // devuelve un array nuevo con el mismo contenido que src
  static char dup[100];
  int i = 0;
  while (src[i])
  {
    dup[i] = src[i];
    i++;
  }
  dup[i] = src[i];
  return dup;
}

void ft_strupcase(char *str)
{
  // convierte a mayúsculas, modifica el string en su lugar 
  // Para pasar a mayúsculas siempre -32
  // Mayúsculas entre 65 y 90 y Minúsculas entre 97 y 122
  int i = 0;
  while (str[i])
  {
    if (str[i] >= 97 && str[i] <= 122)
      str[i] -= 32;
    i++;
  }
}

void ft_strrev(char *str) 
{
  // Invierte un string en su lugar
  char temp;
  int size = strlen(str) - 1; // no tenemos que tocar el último '\0'
  for (int i = 0; i < size / 2; i++)
  {
    temp = str[i];
    str[i] = str[size-i-1];
    str[size-1] = temp;
  }

}


int main(void)
{
    int x = 10;
    int y = 20;
    ft_swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);  // debe imprimir x: 20, y: 10
    char prueba[] = "Hola mundo 123";
    ft_strupcase(prueba);
    printf("Hola mundo pasado a mayúsculas %s: \n ", prueba);
}