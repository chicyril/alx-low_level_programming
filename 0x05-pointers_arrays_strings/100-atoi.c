#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to convert
 *
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int i, ret, sign;

	sign = 1;
	ret = 0;
	i = 0;
	while (s[i] != '\0' && !(s[i] >= '0' && s[i] <= '9'))
	{
		if (s[i] == '-' || s[i] == '+')
			sign *= 1 - 2 * (s[i] == '-');
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		ret = ret * 10 + (s[i] - '0');
		i++;
	}
	return (sign * ret);
}
