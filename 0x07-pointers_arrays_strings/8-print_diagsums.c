#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum to 2 diags of sq matrx
 * @a: integer
 * @size: int too
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum;

	sum = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
			j++;
		}
		i++;
	}
	printf("%d", sum);
}
