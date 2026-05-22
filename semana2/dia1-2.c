#include<stdio.h>

// Reimplementa strlen tú sola sin usar <string.h>. Solo con un loop y el '\o' como condición de parada:
int ft_strlen(char *str)
{
  // el prefijo ft_ es la convención de 42 para funciones propias. 
  int i = 0;
  while (str[i]) // si str[i] es iguasl a '\0' es igual a 0 - False
   i ++;
  return i;
}

char *ft_strcpy(char *dest, char *src)
{
  // copia src en dest, incluyendo el '\0'
  int i = 0;
  while (src[i])
  {
    dest[i] = src[i];
    i ++;
  }
  dest[i] = src[i]; // dest[i] = '\0';
  // devuelve dest
  return dest;
}

int ft_strcmp(char *s1, char *s2)
{
  // devuelve 0 si son iguales
  // devuelve un número negativo si s1 < s2
  // devuelve un número positivo si s1 > s2
  int i = 0;
  while (s1[i] == s2[i] && s1[i])
    i++;
  return s1[i] - s2[i];

}

int main(void)
{
  char saludo[] = "hola";
  printf("Hola tiene %d carácteres. \n", ft_strlen(saludo));
  char copia_saludo[10];
  ft_strcpy(copia_saludo, saludo);
  printf("original: %s y copia: %s \n", saludo, copia_saludo);

  printf("%d\n", ft_strcmp("hola", "hola"));   // 0
  printf("%d\n", ft_strcmp("hola", "hols"));   // negativo
  printf("%d\n", ft_strcmp("hola", "hola mundo"));   // negativo
}