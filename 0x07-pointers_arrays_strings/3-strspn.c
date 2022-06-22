#include "main.h"
#include <stdio.h>

/**
 * _strspn - locates a character in a string.
 * @s: string array
 * @accept: another string
 *
 * Return: Char pointer s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int num;

	i = 0;
	num = 0;
	while (s[i] != ' ')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				num = num + 1;
			}
			j++;
		}
		i++;
	}
	return (num);
}
