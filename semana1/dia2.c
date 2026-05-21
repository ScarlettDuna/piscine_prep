#include <stdio.h>

int main(void)
{
	int i;
	// fizzbuzz
	i = 1;
	while (i <= 20)
	{
		if (i % 15 == 0)
			printf("FizzBuzz\n");
		else if (i % 3 == 0)
			printf("Fixx\n");
		else if (i % 5 == 0)
			printf("Buzz\n");
		else 
			printf("%d\n", i);
		i++;
	}
	return 0;
}
