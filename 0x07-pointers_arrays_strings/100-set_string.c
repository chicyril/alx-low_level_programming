#include "main.h"

/**
 * set_string - double dereference a double pointer to a string
 * @s: double pointer
 * @to: string
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
