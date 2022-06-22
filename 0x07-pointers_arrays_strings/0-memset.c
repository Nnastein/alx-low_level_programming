#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: array of string
 * @c: const byte
 * @n: num of bytes
 *
 * Return: Char pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
