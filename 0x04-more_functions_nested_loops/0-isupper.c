#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: character to check
 *
 * Return: 0 on success
 */
int _isupper(int c)
{
	int i;
	int check;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			check = (c == i);
			break;
		}
		check = (c == i);
	}
	return (check);
}
