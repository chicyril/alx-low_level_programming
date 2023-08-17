#include "main.h"

/**
 * print_line - prints line
 * @u: number of underscores
 *
 */
void print_line(int u)
{
	int i;

	for (i = 0; i <= u; i++)
		if (i > 0)
			_putchar('_');
	_putchar('\n');
}
