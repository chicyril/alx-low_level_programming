#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @d: number of backslash to print
 *
 */
void print_diagonal(int d)
{
	int i;
	int j;

	for (i = 1; i <= d; i++)
	{
		if (i > 1)
		{
			_putchar('\n');
			for (j = 1; j < i; j++)
				_putchar(' ');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
