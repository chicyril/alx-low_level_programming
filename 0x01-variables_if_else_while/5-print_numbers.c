#include <stdio.h>

/**
 * main - Print numbers 0 to 9 inclusive
 *
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
