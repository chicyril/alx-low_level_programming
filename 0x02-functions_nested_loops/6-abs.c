#include "main.h"

/**
 * _abs - computes absolute value
 * @num: parameter
 *
 * Return: abs of num
 */
int _abs(int num)
{
	if (num < 0)
		num *= (-1);
	return (num);
}
