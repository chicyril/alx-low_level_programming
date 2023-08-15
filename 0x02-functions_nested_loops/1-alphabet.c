#include "main.h"

/**
 * print_alphabet - Print lower case alphabet
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
}
