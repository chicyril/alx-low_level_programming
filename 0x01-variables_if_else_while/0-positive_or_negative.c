#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Assigns random number to a variable
 *
 * Description: main prints if the number is
 * positive, negative or zero.
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		if (n > 0)
			printf("%d is positive\n", n);
		else
			printf("%d is negative\n", n);
	}
	return (0);
}
