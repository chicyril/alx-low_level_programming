#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to resulting string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int l1 = 0;
	int l2 = 0;
	int i = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	p = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (p == NULL)
		return (NULL);
	while (i < (l1 + l2))
	{
		if (i >= l1)
			p[i] = s2[i - l1];
		else
			p[i] = s1[i];
		i++;
	}
	return (p);
}
