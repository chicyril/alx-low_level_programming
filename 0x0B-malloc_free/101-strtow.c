#include <stdlib.h>
#include "main.h"
/**
 * wrd_cntr - counts words and characters in a string
 * @str: string to count
 *
 * Return: word count
 */
int wrd_cntr(char *str)
{
	int i, wrd, wrdcnt;

	wrdcnt = 0;
	i = 0;
	wrd = OFF;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			wrd = OFF;
			i++;
			continue;
		}
		if (wrd == OFF)
		{
			wrd = IN;
			wrdcnt++;
		}
		i++;
	}
	return (wrdcnt);
}

/**
 * token_arr - split string into array of words (token)
 * @words: array to strore tokens on success
 * @str: string to split
 *
 * Return: 1 on success
 */
int token_arr(char **words, char *str)
{
	int i, j, wrd, wrdnum, wrdlnt, strlnt;

	for (strlnt = 0; str[strlnt]; strlnt++)
		;
	wrdnum = 0;
	wrdlnt = 0;
	wrd = OFF;
	for (i = 0; i <= strlnt; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			wrd = IN;
			wrdlnt++;
		}
		if ((str[i] == ' ' || str[i] == '\0') && wrd == IN)
		{
			words[wrdnum] = NULL;
			words[wrdnum] = (char *)malloc(sizeof(char) * (wrdlnt + 1));
			if (words[wrdnum] == NULL)
			{
				for (j = 0; j < wrdnum; j++)
					free(words[j]);
				return (-1);
			}
			for (j = 0; j < wrdlnt; j++)
				words[wrdnum][j] = str[i - wrdlnt + j];
			words[wrdnum][j] = '\0';
			wrdnum++;
			wrdlnt = 0;
			wrd = OFF;
		}
	}
	words[wrdnum] = NULL;
	return (1);
}
/**
 * strtow - split a string into words
 * @str: string to tokenize
 *
 * Return: array of strings (tokens) or NULL
 */
char **strtow(char *str)
{
	int wrdcnt, success;
	char **words = NULL;

	if (str == NULL || *str == '\0')
		return (NULL);
	wrdcnt = wrd_cntr(str);
	if (wrdcnt == 0)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (wrdcnt + 1));
	if (words == NULL)
		return (NULL);
	success = token_arr(words, str);
	if (success == -1)
	{
		free(words);
		return (NULL);
	}
	return (words);
}
