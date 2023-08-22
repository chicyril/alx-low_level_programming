#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: parameter
 *
 */

void print_rev(char *s)
{
	int i, len;

	len = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		++len;
		++i;
	}
	while (len > 0)
	{
		_putchar(*(s + len - 1));
		--len;
	}
	_putchar('\n');
}
