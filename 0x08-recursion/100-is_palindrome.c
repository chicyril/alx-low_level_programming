#include "main.h"

/**
 * chklen - ckeck the length of a string from an initial length
 * @s: string
 * @len: starting length
 *
 * Return: calculated length
 */
int chklen(char *s, int len)
{
	if (!s[len])
		return (len);
	len = chklen(s, len + 1);
	return (len);
}
/**
 * tenet - checks is a string is a palindrome
 * @s: string to check
 * @len: length of the string
 * @p: another pointer to string
 *
 * Return: 1 if palindrome or 0
 */
int tenet(char *s, int len, char *p)
{
	int chk = 1;

	if (*p == '\0')
		return (1);
	chk = tenet(s, len - 1, p + 1);
	if (chk)
		chk = (*p == s[len - 1]);
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
	int len = chklen(s, 0);

	p = s;
	return (tenet(s, len, p));
}
