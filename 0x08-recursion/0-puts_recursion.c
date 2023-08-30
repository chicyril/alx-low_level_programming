#include "main.h"

/**
 * _puts_recursion - use recursion to print a string
 * @s: pointer to the string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
