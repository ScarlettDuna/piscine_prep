#include <stdio.h>
#include <stdbool.h> // Importar libreria booleanos

int main(void)
{
	int num = 9;
	bool es_primo = true;
	if (num = 1)	// El 1 NO es primo.
		es_primo = false;
	for (int i = num-1; i > 1; i--) {
  		if (num % i == 0)
		es_primo = false;
	}
	printf("El número %d es primo: %d", num, es_primo);

	return 0;
}


