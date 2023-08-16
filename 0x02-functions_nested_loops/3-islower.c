#include "main.h"

/**
 * _islower - checks if a character is a lower case character
 * @chk: is the character being checked
 *
 * Return: 0 or 1
 */
int _islower(int chk)
{
	int i;
	int c;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (chk == i)
		{
			c = (chk == i);
			break;
		}
		c = (chk == i);
	}
	return (c);
}
