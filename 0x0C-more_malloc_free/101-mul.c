#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * error - print error and exit the program when error is encountered
 *
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * len_if_dig - count the length of a string if it contains all digits
 * @str: string to count
 *
 * Return: length or exit program with error if str contains non-dig
 */
int len_if_dig(char *str)
{
	int len = 0;

	while (str[len])
	{
		if (!(str[len] >= '0' && str[len] <= '9'))
			error();
		len++;
	}
	return (len);
}

/**
 * fill_res - fills the result of product a operation in an array
 * @res: array to store the result
 * @opr1: operand1 - array of digits
 * @opr2: operand2 - array of digits
 * @len1: length of digits in op1
 * @len2: length of digits in op2
 *
 */
void fill_res(int *res, char *opr1, char *opr2, int len1, int len2)
{
	int dig1, dig2, opp_res, carry, i, j;

	for (i = len1 - 1; i >= 0; i--)
	{
		dig1 = opr1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			dig2 = opr2[j] - '0';
			opp_res = dig1 * dig2;
			opp_res += carry;
			res[i + j + 1] += opp_res % 10;
			if (res[i + j + 1] > 9)
			{
				res[i + j] += res[i + j + 1] / 10;
				res[i + j + 1] = res[i + j + 1] % 10;
			}
			carry = opp_res / 10;
		}
		res[i] += carry;
	}
}

/**
 * main - calculates the product of 2 arguments
 * @argc: arguments to main count
 * @argv: list of arguments to main
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int len1, len2, totlen, i, flag;
	int *res = NULL;

	if (argc != 3)
		error();
	len1 = len_if_dig(argv[1]);
	len2 = len_if_dig(argv[2]);
	totlen = len1 + len2;
	res = malloc(sizeof(int) * totlen);
	if (res == NULL)
		return (1);
	for (i = 0; i < totlen; i++)
		res[i] = 0;
	fill_res(res, argv[1], argv[2], len1, len2);
	flag = 0;
	for (i = 0; i < totlen; i++)
	{
		if (!flag)
		{
			if (res[i])
				flag = 1;
			else
				continue;
		}
		printf("%d", res[i]);
	}
	if (!flag)
		printf("%d", 0);
	printf("\n");
	free(res);
	res = NULL;
	return (0);
}
