#include <stdio.h>

/**
 * main - Print a combination of 3 numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a <= 55)
	{
		b = 49;
		while (b <= 56)
		{
			if (b <= a)
			{
				b++;
				continue;
			}
			c = 50;
			while (c <= 57)
			{
				if (c <= b)
				{
					c++;
					continue;
				}
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || b != 56 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
