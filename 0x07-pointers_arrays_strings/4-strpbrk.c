#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: set of bytes
 *
 * Return: a pointer to first occurence any of accept in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	int found[255] = {0};
	char *ptr = NULL;

	for (i = 0; accept[i] != '\0'; i++)
		found[(int)accept[i]] = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (found[(int)s[i]])
		{
			ptr = &s[i];
			break;
		}
	}
	return (ptr);
}
