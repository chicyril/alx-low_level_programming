#include "main.h"

/**
 * times_table - print time table
 *
 */
void times_table(void)
{
	int a, b, m;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			m = (a * b);
			if (m > 9)
			{
				if (m >= 100)
				{
					_putchar(m / 100 + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar(m % 10 + '0');
				}
				if (b > 0)
					_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			else
			{
				if (b > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(m + '0');
			}
			if (b < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
