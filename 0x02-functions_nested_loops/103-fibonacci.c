#include <stdio.h>

/**
 * main - prints some of even valued fibo terms less than 4000000
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long fibo[100];
	unsigned long sum;
	int i;

	fibo[0] = 1;
	fibo[1] = 2;
	sum = 2;
	for (i = 2; i < 100; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		if (fibo[i] > 4000000)
			break;
		if (fibo[i] % 2 == 0)
			sum += fibo[i];
	}
	printf("%lu\n", sum);
	return (0);
}
