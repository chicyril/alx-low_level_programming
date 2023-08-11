#include <stdio.h>

/**
 * main - Print lower case alphabets in reverse order
 *
 * Return: 0 on success
 */
int main(void)
{
	int alpha;

	for (alpha = 122; alpha >= 97; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
