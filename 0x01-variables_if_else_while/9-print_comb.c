#include <stdio.h>

/**
 * main - Print numbers 0 to 9 seperated by , and space
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
