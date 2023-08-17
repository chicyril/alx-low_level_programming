#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: parameter
 *
 * Return: last digit
 */
int print_last_digit(int num)
{
	int ld;

	if (num < 0)
		num *= -1;
	ld = num % 10;
	if (ld < 0)
		ld *= -1;
	return (ld);
}
