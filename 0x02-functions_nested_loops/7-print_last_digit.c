#include "main.h"

/**\
 * print_last_digit - prints the last digit
 * @n: n is a number
 *
 * Return: an integer
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
	}
	else if (n < 0)
	{
		return (-n % 10);
	}
}
