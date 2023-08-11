#include <stdio.h>

/**
 * main - Prints lower case alphabets excluding e and q
 *
 * Return: 0 on success
 */
int main(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha == 101 || alpha == 113)
			continue;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
