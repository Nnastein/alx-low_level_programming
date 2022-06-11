#include "main.h"

/**
 * print_numbers - prints 0 to 9 with newline
 *
 * Return: void
 */

void print_numbers(void)
{
	int c;

	(c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
