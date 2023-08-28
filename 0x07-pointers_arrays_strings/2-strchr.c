#include "main.h"

/**
 * _strchr - finds a character in a string
 * @s: string parameter
 * @c: character parameter
 *
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	int i, lnt;
	char *p = NULL;

	lnt = 0;
	while (s[lnt] != '\0')
		lnt++;
	for (i = 0; i <= lnt; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	return (p);
}
