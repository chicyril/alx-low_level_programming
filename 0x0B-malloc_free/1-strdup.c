#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string and returns a pointer to it
 * @str: the string to duplicate
 *
 * Return: a pointer the str duplicate
 */
char *_strdup(char *str)
{
	int i, lnt;
	char *ptr = NULL;

	if (str == NULL)
		return (NULL);
	for (lnt = 0; str[lnt] != '\0'; lnt++)
		;
	ptr = (char *)malloc(sizeof(*str) * lnt + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= lnt + 1; i++)
		ptr[i] = str[i];
	return (ptr);
}
