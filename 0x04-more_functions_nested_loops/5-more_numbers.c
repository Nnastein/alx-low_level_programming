#include "main.h"

/**
 * more_numbers - print 10x num 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int d;

	d = 0;
	while (d < 10)
	{

		int c;

		for (c = '0'; c <= '14; c++)
		{
			_putchar(c);
		}
		_putchar('\n');

		d++;
	}
	_putchar('\n');
}
