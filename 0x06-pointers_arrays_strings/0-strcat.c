#include "main.h"

/**
 * len - calculates the length of a string
 * @str: string parameter
 *
 * Return: returns the length
 */
int len(char *str)
{
	int lnt;

	lnt = 0;
	while (str[lnt] != '\0')
	{
		++lnt;
	}
	return (lnt);
}

/**
 * _strcat - concatenates two strings
 * @dest: parameter 1
 * @src: parameter 2
 *
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, ld;

	ld = len(dest);
	for (i = 0; src[i] != '\0'; i++)
		dest[ld + i] = src[i];
	dest[ld + i] = '\0';
	return (dest);
}
