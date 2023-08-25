#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: parameter
 *
 * Return: char *
 */
char *leet(char *str)
{
	char aeolt[][5] = {"43017", "AEOLT", "aeolt"};
	char *p;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		p = str + i;
		for (j = 0; j < 5; j++)
		{
			if (*p == aeolt[1][j] || *p == aeolt[2][j])
			{
				*p = aeolt[0][j];
				break;
			}
		}
	}
	return (str);
}
