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
	while (*(haystack + i) != '\0')
	{
		j = 0;
		while (*(needle + j) != '\0')
		{
			if (*(haystack + i) == *(needle + 0))
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
