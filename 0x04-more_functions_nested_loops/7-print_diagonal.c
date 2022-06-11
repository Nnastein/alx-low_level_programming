#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int b = 0;

		while (b < n)
		{
			_putchar(32);
			b++;
		}
		_putchar(92);
	}
	putchar('\n');
}
