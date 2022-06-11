#include "main.h"

/**
 * print_numbers - prints 0 to 9 with newline
 *
 * Return: void
 */

void print_numbers(void)
{
	int c;

	c = '0';
	while(c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
