#include <stdio.h>

/**
 * print_to_98 - prints numbers to 98
 * @n: param
 *
 */
void print_to_98(int n)
{
	int limit;

	limit = 98;
	if (n < limit)
	{
		while (n <= limit)
		{
			if (n != limit)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
	}
	if (n > limit)
	{
		while (n >= limit)
		{
			if (n != limit)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		}
	}
	if (n == limit)
		printf("%d\n", limit);

}
