#include "main.h"

/**
 * _puts - prints the contents of a string variable
 * @str: the parameter
 *
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		++i;
	}
	_putchar('\n');
}
