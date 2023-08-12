#include <stdio.h>

/**
 * main - Print a combination of 2 different numbers seperated by , and space
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int b;

	a = 48;
	while (a <= 57)
	{
		b = 48;
		while (b <= 57)
		{
			if (b <= a)
			{
				b++;
				continue;
			}
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
