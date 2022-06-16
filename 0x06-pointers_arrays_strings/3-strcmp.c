#include "main.h"

/**
 * _strncmp - function that compares two strings
 * @s1: first char
 * @s2: second char
 *
 * Return: Integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;

	if (i < j)
		return (-15);
	else if (i > j)
		return (15);
	else
		return (0);
}
