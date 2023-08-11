#include <stdio.h>

/**
 * main - Prints all the numbers in base 16
 *
 * Return: 0 on success
 */
int main(void)
{
	int n16;
	int a16;

	for (n16 = 48; n16 <= 57; n16++)
		putchar(n16);
	for (a16 = 97; a16 <= 102; a16++)
		putchar(a16);
	putchar('\n');
	return (0);
}
