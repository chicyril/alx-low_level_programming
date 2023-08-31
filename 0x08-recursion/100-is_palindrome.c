#include "main.h"
/**
 * tenet - checks is a string is a palindrome
 * @s: string to check
 * @lnt: length of the string
 * @p: another pointer to string
 *
 * Return: 1 if palindrome or 0
 */
int tenet(char *s, int lnt, char *p)
{
	int chk = 1;

	if (*p == '\0')
		return (chk);
	chk = tenet(s, lnt - 1, p + 1);
	if (chk)
		chk = (*p == s[lnt - 1]);
	return (chk);
}

/**
 * is_palindrome - return if a string is palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome or 0
 */
int is_palindrome(char *s)
{
	char *p;
	int lnt = 0;

	while (s[lnt] != '\0')
		lnt++;
	if (lnt == 0 || lnt == 1)
		return (1);
	p = s;
	return (tenet(s, lnt, p));
}
