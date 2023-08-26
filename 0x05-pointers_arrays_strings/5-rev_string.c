#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 *
 */
void rev_string(char *s)
{
	int i, j, slen;
	char ch;

	slen = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		++slen;
		i++;
	}
	for (j = 0; j < slen / 2; j++)
	{
		ch = s[j];
		s[j] = s[slen - 1 - j];
		s[slen - 1 - j] = ch;
	}
}
