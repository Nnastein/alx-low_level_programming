#include "main.h"

/**
 * _strcat - function that adds string
 * @dest: first string
 * @src: second string
 *
 * Return: Char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
    	int j = 0;
    	while (src[j] != '\0')
    	{
        	dest[i+j] = src[j];
        	j++;
    	}
	return (dest);
}
