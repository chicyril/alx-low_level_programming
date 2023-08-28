#include "main.h"

/**
 * _strspn - count the length of prefix substring
 * @s: string parameter
 * @accept: set to check
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, lnt;
	int stp;

	lnt = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		stp = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				lnt++;
				stp = 0;
				break;
			}
		}
		if (stp)
			break;
	}
	return (lnt);
}
