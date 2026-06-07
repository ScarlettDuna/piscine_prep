#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// devuelve un array nuevo con el mismo contenido que src
char *ft_strdup(char *src)
{
  int size = strlen(src) + 1;;
  // char es siempre 1, por lo que no hace falta poner ... * sizeof(char)
  char *dup = malloc(size); 
  if (dup == NULL)
    return NULL;
  int i = 0;
  while (src[i])
  {
    dup[i] = src[i];
    i++;
  }
  dup[i] = src[i];
  return dup;
}
int main(void)
{
  char *s1 = ft_strdup("hola");
  char *s2 = ft_strdup("piscine 42");
  char *s3 = ft_strdup("");        // string vacío
  char *s4 = ft_strdup("a");       // un solo carácter

  printf("s1: %s\n", s1);
  printf("s2: %s\n", s2);
  printf("s3: '%s'\n", s3);        // comillas para ver si está vacío
  printf("s4: %s\n", s4);

  //free(s1);
  //free(s2);
  //free(s3);
  //free(s4);
  return 0;
}