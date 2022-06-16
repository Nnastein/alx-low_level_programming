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
	while (src[n] != '\0')
	{
		dest[i] = src[i];
		num++;
	}
	for (i = 0 ; j < n; i++)
		dest[j] = '\0';

	return (dest);
}
