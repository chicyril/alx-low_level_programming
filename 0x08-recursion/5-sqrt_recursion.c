#include "main.h"

/**
 * ssqrt - helper to get the root or a number
 * @n: number
 * @root: guess root
 *
 * Return: root or -1
 */
int ssqrt(int n, int root)
{
	if (root * root > n)
		return (-1);
	if (root * root == n)
		return (root);
	root = ssqrt(n, root + 1);
	return (root);
}

/**
 * _sqrt_recursion - using recursion to get the squar root of a number
 * @n: number
 *
 * Return: square root or -1 in case of errors
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (ssqrt(n, 1));
}
