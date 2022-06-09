#include "main.h"

/**
 * print_sign - prints the ign of a number
 * @n: n is a number
 *
 * Return: an integer
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
