#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0 on success
 */
int main(void)
{
	unsigned long num;
	unsigned long lpf;
	unsigned long oddnum;

	lpf = 0;
	num = 612852475143;
	while (num % 2 == 0)
	{
		lpf = 2;
		num /= 2;
	}
	for (oddnum = 3; oddnum * oddnum <= num; oddnum += 2)
	{
		while (num % oddnum == 0)
		{
			lpf = oddnum;
			num /= oddnum;
		}
	}
	if (num > 2)
		lpf = num;
	printf("%lu\n", lpf);
	return (0);
}
