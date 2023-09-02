#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: array of arguments name
 *
 * Return: 0 on success
 */
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
