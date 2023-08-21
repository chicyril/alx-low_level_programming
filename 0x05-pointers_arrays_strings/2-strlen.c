#include "main.h"

/**
 * _strlen - returns the length of a string parameter
 * @s: param
 *
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		++len;
		++i;
	}
	return (len);
}
