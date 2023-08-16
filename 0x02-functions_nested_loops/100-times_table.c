#include "main.h"

/**
 * mul - Multiplies 2 numbers
 * @x: Parameter1
 * @y: Parameter2
 */
void mul(int x, int y)
{
	int m;

	m = x * y;
	if (m > 9)
	{
		if (m > 99)
		{
			_putchar(' ');
			_putchar(m / 100 + '0');
			_putchar((m / 10) % 10 + '0');
			_putchar(m % 10 + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
		}
	}
	else
	{
		if (y > 0)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(m + '0');
	}
}

/**
 * print_times_table - Prints n times table
 * @n: parameter
 */
void print_times_table(int n)
{
	int a, b;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				mul(a, b);
				if (b < n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
