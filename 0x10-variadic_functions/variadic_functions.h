#ifndef _H
#define _H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct Format_type - print format
 * @specifier: specifier
 * @action: print for each format specifier
 */
typedef struct Format_type
{
	char *specifier;
	void (*action)(va_list args, char *separator);
} f_s;

void print_char(va_list args, char *separator);
void print_int(va_list args, char *separator);
void print_float(va_list args, char *separator);
void print_str(va_list args, char *separator);

#endif
