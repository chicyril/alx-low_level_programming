#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @num: parameter
 *
 * Return: 1, 0 or -1
 */
int print_sign(int num)
{
	int i;

	if (num == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		if (num > 0)
		{
			i = 1;
			_putchar('+');
		}
		else
		{
			i = 0 - 1;
			_putchar('-');
		}

	}
	return (i);
}
