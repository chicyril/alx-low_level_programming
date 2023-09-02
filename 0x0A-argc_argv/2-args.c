#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the names of arguments it receives
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
