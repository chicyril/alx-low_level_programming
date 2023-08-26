#include "main.h"

/**
 * puts2 - prints the odd character of a string
 * @str: string parameter
 *
 */
void puts2(char *str)
{
	int l, i;

	l = 0;
	while (str[l] != '\0')
		l++;
	for (i = 0; i < l; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
