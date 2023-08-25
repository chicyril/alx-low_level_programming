#include "main.h"

/**
 * len - calculates the length of a string
 * @str: parameter1
 *
 * Return: length
 */
int len(char *str)
{
	int lngth = 0;

	while (str[lngth] != '\0')
		++lngth;
	return (lngth);
}

/**
 * _strncat - concatenate 2 strings
 * @dest: param1
 * @src: param2
 * @n: param3
 *
 * Return: character array
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, ld;

	ld = len(dest);
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[ld + i] = src[i];
	dest[ld + i] = '\0';
	return (dest);
}
