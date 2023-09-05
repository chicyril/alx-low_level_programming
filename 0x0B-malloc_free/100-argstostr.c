#include <stdlib.h>
#include "main.h"

/**
 * strlnt - calculates the length of a string
 * @str: string
 *
 * Return: lenght
 */
int strlnt(char *str)
{
	int lnt = 0;

	while (str[lnt])
		lnt++;
	return (lnt);
}
/**
 * argstostr - concatenates arguments
 * @ac: number of arguments
 * @av: list of arguments
 *
 * Return: a pointer to the concatenated list or null
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, totlnt;
	char *ptr = NULL;

	totlnt = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		totlnt += strlnt(av[i]);
	ptr = (char *)malloc(sizeof(**av) * (totlnt + ac + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
