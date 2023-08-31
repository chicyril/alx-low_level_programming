#include "main.h"

/**
 * check_factors - check for possible factors of a number
 * @n: number being checked
 * @pf: possible factor
 *
 * Return: 0 or 1
 */
int check_factors(int n, int pf)
{
	if (n % pf == 0)
		return (0);
	if (pf >= n / 2)
		return (1);
	return (check_factors(n, pf + 1));
}
/**
 * is_prime_number - check if a number is prime or not
 * @n: number
 *
 * Return: 1 if prime, or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_factors(n, 2));
}
