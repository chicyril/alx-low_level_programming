#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * chk_coins - calculates coins
 * @change: amount to convert to coins
 * @coins: calculated coins
 *
 * Return: coins
 */
int chk_coins(int change, int coins)
{
	int cents[5] = {25, 10, 5, 2, 1};
	int *p;

	p = cents;
	if (change == 0)
		return (coins);
	while (*p != cents[5] && change / *p <= 0)
		p = p + 1;
	coins += change / *p;
	change = change % *p;
	coins = chk_coins(change, coins);
	return (coins);
}
/**
 * main - print amount of coins for change
 * @argc: number of cli arguments
 * @argv: list of argument names
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) > 0)
	{
		coins = chk_coins(atoi(argv[1]), coins);
		printf("%d\n", coins);
	}
	else
		printf("%d\n", 0);
	return (0);
}
