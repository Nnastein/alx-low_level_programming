#include <stdio.h>

/**
 * _strlen - string length
 * @c: char var
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
