#include "main.h"

/**
 * string_toupper - changes lowercase to upper
 * @str: parameter 1
 *
 * Return: a character pointer
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
