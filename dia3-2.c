#include<stdio.h>

// Maximo(arr, size)
// int maximo(int *arr, int size) - El puntero también indica que es un array
int maximo(int arr[], int size)
{
  int max = arr[0];
  for (int i = 0; i < size; i ++){
    if (max < arr[i])
      max = arr[i];
  }
  return max;

}

// Mínimo(arr, size)
int minimo(int arr[], int size)
{
  int min = arr[0];
  for (int i = 0; i < size; i ++){
    if (min > arr[i])
      min = arr[i];
  }
  return min;

}

// media(arr, size)
float media(int arr[], int size )
{
  float suma = 0; // Se cambia a float para que al dividir pueda ser float. En C si se dividen dos int sale siempre int
  for (int i = 0; i < size; i ++){
    suma += arr[i];
  }
  return suma / size;
}

// invertir(arr, size) - invierte el array en su lugar, sin crear un array nuevo.
void invertir(int arr[], int size)
{
  int temp;
  int punto_medio = size / 2; // aunque la división de decimales al ser un int se queda con la parte entera del número haciendo un Math.floor()
  for (int i = 0; i < punto_medio; i ++){
    temp = arr[i];
    arr[i] = arr[size-1-i];
    arr[size-1-i] = temp;
  }

}

int main(void)
{
int numeros[5] = {3, 7, 1, 9, 4};

// En C no hay .length para saber su tamaño
int size = sizeof(numeros) / sizeof(numeros[0]);

  printf("El número más alto del array es %d \n", maximo(numeros, size));
  printf("El número más bajo del array es %d \n", minimo(numeros, size));
  printf("La media del array es %.2f \n", media(numeros, size));
  invertir(numeros, size);
  for (int i = 0; i < size; i++)
    printf("El array invertido es %d \n", numeros[i]);
  return 0;
}