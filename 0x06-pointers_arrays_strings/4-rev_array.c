#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: param1
 * @n: param2
 *
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
