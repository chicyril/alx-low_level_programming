#include <stdio.h>

/**
 * main - print fizz, buzz, fizzbuzz or number
 *
 * Return:0 on success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
			if (i < 100)
				printf(" ");
			continue;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			if (i < 100)
				printf(" ");
			continue;
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i < 100)
				printf(" ");
			continue;
		}
		printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
