#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: array of char
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while(s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
