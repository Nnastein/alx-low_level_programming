#include "main.h"
#include <stdio.h>

/**
 * checker - checks integer
 * @square: sq int
 * @i: int
 *
 * Return: 1
 */

int checker(int square, int i)
{
	if (i * i == square)
		return (i);
	else if (i > square / i)
		return (checker(square, i - 1));
	else if (i < square / i)
		return (checker(square, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - returns 1 if prime and 0 otherwise
 * @n: num
 *
 * Return: int;
 */

int _sqrt_recursion(int n)
{
	int s;

	s = 1;
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (checker(n, s));
}
