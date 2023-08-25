#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: param1
 * @s2: param2
 *
 * Return: int difference in value
 */
int _strcmp(char *s1, char *s2)
{
	int i, cmp;

	cmp = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = s1[i] - s2[i];
			break;
		}
	}
	return (cmp);
}
