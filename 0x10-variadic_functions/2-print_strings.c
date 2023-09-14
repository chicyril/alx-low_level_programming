#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: string seperator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s = NULL;
	unsigned int i;
	va_list strings;

	if (n != 0)
	{
		va_start(strings, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(strings, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
		va_end(strings);
	}
	printf("\n");
}
