#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: string to search
 * @needle: string searched for
 *
 * Return: a pointer to the occurence or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *strt, *srch;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		strt = haystack;
		srch = needle;
		while ((*haystack && *srch) && (*haystack == *srch))
		{
			haystack++;
			srch++;
		}
		if (*srch == '\0')
			return (strt);
		haystack = strt + 1;
	}
	return (NULL);
}
