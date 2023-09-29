#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: unsigned long int number
 */
void print_binary(unsigned long int n)
{
	int bits = 0;
	unsigned long num = 0, temp = 0;

	if (n <= 1)
	{
		if (n == 0)
			_putchar('0');
		if (n == 1)
			_putchar('1');
		return;
	}
	temp = n;
	while (temp)
	{
		temp >>= 1;
		bits++;
	}
	while (bits)
	{
		num = (n >> (bits - 1)) & 1;
		_putchar(num + '0');
		bits--;
	}
}
