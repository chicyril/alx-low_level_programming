#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates n characters of string 2 to string 1
 * @s1: string 1
 * @s2: string 2
 * @n: number of characters from string 2 or all of string 2
 *
 * Return: a pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sl1, sl2, i;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (sl1 = 0; s1[sl1]; sl1++)
		;
	for (sl2 = 0; s2[sl2]; sl2++)
		;
	if (n >= sl2)
		n = sl2;
	str = malloc(sizeof(char) * (sl1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < sl1 + n; i++)
	{
		if (i >= sl1)
			str[i] = s2[i - sl1];
		else
			str[i] = s1[i];
	}
	str[i] = '\0';
	return (str);
}
