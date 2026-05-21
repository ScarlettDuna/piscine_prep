#include<stdio.h>
/* Para leer input del usuario
int opcion;
scanf("%d", &opcion); */

int maximo(int arr[], int size)
{
  int max = arr[0];
  for (int i = 0; i < size; i ++){
    if (max < arr[i])
      max = arr[i];
  }
  return max;

}

int minimo(int arr[], int size)
{
  int min = arr[0];
  for (int i = 0; i < size; i ++){
    if (min > arr[i])
      min = arr[i];
  }
  return min;

}


float media(int arr[], int size )
{
  float suma = 0; 
  for (int i = 0; i < size; i ++){
    suma += arr[i];
  }
  return suma / size;
}

void invertir(int arr[], int size)
{
  int temp;
  int punto_medio = size / 2; 
  for (int i = 0; i < punto_medio; i ++){
    temp = arr[i];
    arr[i] = arr[size-1-i];
    arr[size-1-i] = temp;
  }

}

int main(void)
{
    int numeros[5] = {3, 7, 1, 9, 4};
    int size = sizeof(numeros) / sizeof(numeros[0]);
    int opcion;

    while (1)
    {
        printf("\n=== Menu ===\n");
        printf("1. Máximo\n");
        printf("2. Mínimo\n");
        printf("3. Media\n");
        printf("4. Invertir\n");
        printf("5. Salir\n");
        // Si scanf NO devuelve 1, significa que no leyó un entero (es un char o string)
        if (scanf("%d", &opcion) != 1) {
            printf("¡Ingresaste texto! Saliendo del programa...\n");
            break; 
        }
        if (opcion == 1)
            printf("El máximo: %d \n", maximo(numeros, size));
        else if (opcion == 2)
            printf("El mínimo: %d \n", minimo(numeros, size));
        else if (opcion == 3)
            printf("La media %.2f \n", media(numeros, size));
        else if (opcion == 4)
        {
          invertir(numeros, size);
            for (int i = 0; i < size; i++)
              printf("%d ", numeros[i]);
            printf("\n");
        }   
        else if (opcion == 5)
            break;
        else
          printf("Escribe solo un número del 1 al 5.");
    }
    return 0;
}