#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - Prints the random digit stored in a variable
 *
 * Return: 0 on succes
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	if (ld != 0 && ld < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	return (0);
}
