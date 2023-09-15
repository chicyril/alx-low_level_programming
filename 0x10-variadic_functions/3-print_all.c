#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: format of arguments to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	f_s form_spec[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str}
	};
	char *separator = "";

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_spec[j].specifier)
			{
				form_spec[j].action(args, separator);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

/**
 * print_char - prints a character
 * @args: a list of argument
 * @separator: separator to print
 */
void print_char(va_list args, char *separator)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: argument
 * @separator: separator
 */
void print_int(va_list args, char *separator)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_float - prints a floating point num
 * @args: argument
 * @separator: separator
 */
void print_float(va_list args, char *separator)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_str - prints a string
 * @args: argument
 * @separator: separator
 */
void print_str(va_list args, char *separator)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}
	printf("%s%s", separator, str);
}
