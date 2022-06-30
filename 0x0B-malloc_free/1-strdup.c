#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	int len, i;
	char *arr;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (*(str + len) != '\0')
		len++;

	arr = malloc(sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = str[i];
	arr[i] = '\0';

	return (arr);
}
