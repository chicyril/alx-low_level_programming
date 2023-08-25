#include "main.h"

/**
 * cap_string - capitile strings
 * @str: string pointer
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i, CAPS;
	char *p;

	CAPS = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		p = str + i;
		if (*p == ' ' || *p == '\t' || *p == '\n')
		{
			CAPS = 0;
			continue;
		}
		if (*p == '.' || *p == ',' || *p == ';')
		{
			CAPS = 0;
			continue;
		}
		if (*p == '"' || *p == '?' || *p == '!')
		{
			CAPS = 0;
			continue;
		}
		if (*p == '(' || *p == ')' || *p == '{' || *p == '}')
		{
			CAPS = 0;
			continue;
		}
		if (!CAPS)
		{
			if (*p >= 'a' && *p <= 'z')
				*p = *p - 32;
			CAPS = 1;
		}
	}
	return (str);
}
