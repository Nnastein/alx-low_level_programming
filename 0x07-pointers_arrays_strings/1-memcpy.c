#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: the address of the memory to print
 * @src: buffer address 0x01
 * @n: the size of the memory to print
 *
 * Return: Char pointer s.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
