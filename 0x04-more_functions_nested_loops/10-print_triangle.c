#include "main.h"

/**
 * print_triangle - prints triangle of ash symbol
 * @ht: height of the triangle
 *
 */
void print_triangle(int ht)
{
	int i, j, spc;

	for (i = 1; i <= ht; i++)
	{
		for (spc = ht + (ht - i); spc > ht; spc--)
			_putchar(' ');
		for (j = 1; j <= i; j++)
			_putchar('#');
		if (i != ht)
			_putchar('\n');
	}
	_putchar('\n');
}
