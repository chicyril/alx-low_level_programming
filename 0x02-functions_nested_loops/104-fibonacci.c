#include <stdio.h>

/**
 * main - prints the first 98 fibs
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int thatVal, thisVal, currVal;
	int nxt;

	thatVal = 0;
	thisVal = 1;
	for (nxt = 1; nxt <= 98; nxt++)
	{
		currVal = thatVal + thisVal;
		printf("%lu", currVal);
		if (nxt < 98)
			printf(", ");
		thatVal = thisVal;
		thisVal = currVal;
	}
	printf("\n");
	return (0);
}
