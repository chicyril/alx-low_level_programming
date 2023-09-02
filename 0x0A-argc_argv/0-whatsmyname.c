#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: command line argument count
 * @argv: an array of command line argument
 *
 * Return: 0 on success
 */
int main(__attribute__((unused)) int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
