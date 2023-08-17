#include "main.h"

/**
 * _isdigit - checks if an argument in a digit
 * @dig: check argument
 *
 * Return: 0 on success
 */
int _isdigit(int dig)
{
	int i;
	int chk;

	for (i = '0'; i <= '9'; i++)
	{
		if (dig == i)
		{
			chk = (dig == i);
			break;
		}
		chk = (dig == i);
	}

	return (chk);
}
