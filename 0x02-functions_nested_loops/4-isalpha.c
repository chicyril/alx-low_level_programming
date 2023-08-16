#include "main.h"

/**
 * _isalpha - checks if a character is a number or alphabet
 * @chk: the check
 *
 * Return: 0 or 1
 */
int _isalpha(int chk)
{
	int i, j, c, n;

	n = 0;
	for (i = 'a'; i <= 'z'; i++)
	{
		if (chk == i)
		{
			c = (chk == i);
			n = 1;
			break;
		}
		c = (chk == i);
	}
	if (n == 0)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (chk == j)
			{
				c = (chk == j);
				break;
			}
			c = (chk == j);
		}
	}
	return (c);
}
