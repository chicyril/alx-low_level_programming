#include <stdio.h>

/**
 * main - Prints the lower case alphabet.
 *
 * Return: 0 on success
 */
int main(void)
{
	int alphabets;

	for (alphabets = 97; alphabets <= 122; alphabets++)
		putchar(alphabets);
	putchar('\n');
	return (0);
}
