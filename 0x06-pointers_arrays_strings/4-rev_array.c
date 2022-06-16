#include "main.h"

/**
 * reverse_array - function reverses arr
 * @a: ptr a
 * @n: int n
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	n = n - 1;
	while (n >= 0)
	{
		printf("%d", a[n]);
		if (n != 0)
		{
			printf(", ");
		}
		else
			printf("\n");
		n--;
	}


}
