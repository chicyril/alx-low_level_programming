#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints some of the codes stored in main after at runtime
 * @argc: argument count
 * @argv: argument list
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, nbytes;
	unsigned char opcode;
	int (*main_addr)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < nbytes; i++)
	{
		opcode = *((unsigned char *)main_addr);
		printf("%.2x", opcode);
		if (i < nbytes - 1)
			printf(" ");
		main_addr++;
	}
	printf("\n");
	return (0);
}
