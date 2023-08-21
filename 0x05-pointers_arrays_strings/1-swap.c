#include "main.h"

/**
 * swap_int - swap the values of its parameters
 * @a: param1
 * @b: param2
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
