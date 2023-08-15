#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0 on success
 */
int main(void)
{
	char pc[] = "_putchar";
	int i;
	char c;

	for (i = 0; i <= 7; i++)
	{
		c = pc[i];
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
