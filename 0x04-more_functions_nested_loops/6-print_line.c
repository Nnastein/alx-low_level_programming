#include "main.h"

/**
 * print_line - draws a line
 * @n: integer
 *
 * Return: void
 */

void print_line(int n)
{
	int b = 0;

	while (b < n - 1)
	{
		_putchar(b);
		b++;
	}
	putchar('\n');
}
