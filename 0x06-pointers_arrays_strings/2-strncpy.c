#include "main.h"

/**
 * _strncpy - copies the length of string into buffer
 * @dest: param1
 * @src: param2
 * @n: param3
 *
 * Return: a char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
