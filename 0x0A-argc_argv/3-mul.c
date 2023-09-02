#include <stdio.h>
#include <stdlib.h>

/**
 * main - accepts 2 int arguments and print their product
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int a, b, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
