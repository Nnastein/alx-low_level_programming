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
	while (*s1 && (*s1 == *s2))
	{
        	s1++;
	        s2++;
	}

	return (*s1 - *s2);
}
