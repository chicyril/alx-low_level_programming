#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * alldig - checks if a string contains all digits
 * @str: string
 *
 * Return: 0 if all digits
 */
int alldig(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
		if (!isdigit(str[i]))
			return (0);
	return (1);
}

/**
 * main - adds digits parsed as argument
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (!alldig(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
