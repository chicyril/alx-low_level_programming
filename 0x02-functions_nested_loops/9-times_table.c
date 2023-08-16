#include "main.h"

/**
 * times_table - print time table
 *
 */
void times_table(void)
{
	int a, b, m;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			m = a * b;
			_putchar(m);
			if (b == '9')
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
