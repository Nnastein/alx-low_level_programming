#include "main.h"

/**
 * _strncat - function that adds string
 * @dest: first string
 * @src: second string
 * @n: integer
 *
 * Return: Char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int num = 0;

	while (dest[num] != '\0')
	{
		num++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[num + i] = src[i];
	dest[num + i] = '\0';

	return (dest);
}
