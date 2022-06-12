#include "main.h"

/**
 * print_triangle - draws a tiangle
 * @size: integer
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		b = 0;
		while (b < size)
		{
			/*_putchar(92);*/
			/*_putchar(10);*/
			/*if (b < (n-1))*/
			/*{*/
			a = 1;
				/*while (a < (b+1))*/
			while (a < size-b)
			{
				_putchar(' ');
				a++;
			}
			_putchar('#');
			_putchar('\n');
			/*}*/
			b++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
