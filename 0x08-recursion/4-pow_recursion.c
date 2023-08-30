#include "main.h"

/**
 * _pow_recursion - calculate the result of a number raised to another number
 * @x: base number
 * @y: exponent
 *
 * Return: power or -1 -error if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
