#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: first string
 * @needle: second string
 *
 * Return: Char pointer s.
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + 0))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
