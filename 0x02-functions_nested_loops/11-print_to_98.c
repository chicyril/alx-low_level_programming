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
	if (n == limit)
	{
		printf("%d\n", n);
	}
	else
	{
		if (n > limit)
		{
			while (n >= limit)
			{
				if (n == limit)
				{
					printf("%d", n--);
					continue;
				}
				printf("%d, ", n--);
			}
		}
		else
		{
			while (n <= limit)
			{
				if (n == limit)
				{
					printf("%d", n++);
					continue;
				}
				printf("%d, ", n++);
			}
		}
		putchar('\n');
	}
}
