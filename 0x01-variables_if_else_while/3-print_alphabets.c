#include <stdio.h>

/**
 * main - Prints the alphabets in lower and upper case
 *
 * Return: 0 on success
 */
int main(void)
{
	int alphas;

	for (alphas = 97; alphas <= 122; alphas++)
		putchar(alphas);
	for (alphas = 65; alphas <= 90; alphas++)
		putchar(alphas);
	putchar('\n');
	return (0);
}
