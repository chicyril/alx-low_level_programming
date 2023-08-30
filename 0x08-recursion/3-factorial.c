#include "main.h"

/**
 * factorial - calculates the factorial of a parsed number
 * @n: number
 *
 * Return: factorial or -1 for n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
