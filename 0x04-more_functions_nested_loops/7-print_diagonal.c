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
			_putchar(92);
			_putchar(10);

			int a;

			a = 0;
			while (a <= b)
			{
				_putchar(32);
				a++;
			}

			b++;
		}
	}
	putchar('\n');
}
