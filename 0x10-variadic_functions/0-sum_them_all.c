#include "variadic_functions.h"

/**
 * sum_them_all - sum up arguments
 * @n: last known argument wholes value is the number of the unknown
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	sum = 0;
	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
			sum += va_arg(args, int);
		va_end(args);
		return (sum);
	}
	return (0);
}
