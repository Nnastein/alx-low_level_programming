#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: integer
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		b = 0;
		while (b < n)
		{
			/*_putchar(92);*/
			/*_putchar(10);*/
			/*if (b < (n-1))*/
			/*{*/
				a = 0;
				/*while (a < (b+1))*/
				while (a < b)
				{
					_putchar(32);
					a++;
				}
				_putchar(92);
				_putchar(10);
			/*}*/
			b++;
		}
	}
	else
	{
		_putchar(10);
	}
}
