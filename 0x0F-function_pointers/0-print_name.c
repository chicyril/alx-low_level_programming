#include "function_pointers.h"

/**
 * print_name - prints a string
 * @name: string to print
 * @f: called-back function used to print the string
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
