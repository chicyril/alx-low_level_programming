#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main of calculator program
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 on success;
 */
int main(int argc, char **argv)
{
	int (*op_ptr)(int, int);
	char *s;
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	s = argv[2];
	num2 = atoi(argv[3]);
	op_ptr = get_op_func(s);
	if (op_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op_ptr(num1, num2));
	return (0);
}
