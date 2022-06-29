#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: unsigned int
 * @c: char
 *
 * Return: NULL if size is 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *) malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			*(array + i) = c;
		}
		return (array);
	}
}
