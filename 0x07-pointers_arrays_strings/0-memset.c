#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the address of the memory to print
 * @c:
 * @n:
 *
 * Return: Char pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
