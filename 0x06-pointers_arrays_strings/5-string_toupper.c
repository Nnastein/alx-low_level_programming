#include "main.h"
#include <stdio.h>

/**
 * string_toupper - lower to uppercase
 * @: string
 *
 * Return: char
 */

char *string_toupper(char *)
{
	int i;
	int position;

	i = 0;
	while (s[i] != '\0')
	{
		if s[i] >= 'a' && s[i] <= 'z')
		{
			position = s[i] - 'a';
			s[i] = ('A' + position);
		}
		i++;
	}
	return (s);
}
