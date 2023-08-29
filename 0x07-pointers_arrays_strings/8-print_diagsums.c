#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of diagonals of matrice
 * @a: array of numbers in the matrice
 * @size: size
 *
 */
void print_diagsums(int *a, int size)
{
	int s1, s2;
	int i;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
		s2 = s2 + a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", s1, s2);
}
