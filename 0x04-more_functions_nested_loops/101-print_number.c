#include "main.h"

/**
 * print_number - prints integers
 * @n: parameter to be printed
 *
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	if (num / 10)
		print_number(num / 10);
	_putchar('0' + num % 10);
}
