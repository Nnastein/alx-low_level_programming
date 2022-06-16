#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: first string
 * @src: second string
 * @n: integer
 *
 * Return: Char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (i = 0; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
