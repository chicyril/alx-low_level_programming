#include <stdio.h>

/**
 * main - calculates sum of multiples of 5 and 5
 *
 * Return: 0 on success
 *
 */
int main(void)
{
	int n;
	int sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
		if ((n % 3 == 0) || (n % 5 == 0))
			sum += n;
	printf("%d\n", sum);
	return (0);
}
