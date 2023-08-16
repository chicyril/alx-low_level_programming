#include "main.h"

/**
 * print_times_table - print n times table
 * @n: param
 *
 */
void print_times_table(int n)
{
	int a, b, m;
	
	n = n + '0';
	if (n >= '0' && n <= '15')
	{
		for (a = '0'; a <= n; a++)
		{
			for (b = '0'; b <= n; b++)
			{
				m = a * b;
				_putchar(m);
				if (b == n)
				{
					_putchar('$');
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
