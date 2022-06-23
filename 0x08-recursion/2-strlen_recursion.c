#include "main.h"
#include <stdio.h>

/**
 * somedigits - takes the sum of ints
 * @n: arg
 *
 * Return: int
 */

int somedigit(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (n % 10) + somedigit(n / 10);
}

/**
 * _strlen_recursion - returns the length of a string.
 * @s: array of char
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		somedigit(s + 1);
	}
	else
	{
		return (0);
	}
}
