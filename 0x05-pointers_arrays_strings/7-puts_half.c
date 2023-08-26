#include "main.h"

/**
 * puts_half - prints the top half of a string
 * @str: string parameter
 *
 */
void puts_half(char *str)
{
	int l, i;

	l = 0;
	while (str[l] != '\0')
		l++;
	if (l % 2 == 0)
	{
		for (i = l / 2; i < l; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (l / 2) + 1; i < l; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
