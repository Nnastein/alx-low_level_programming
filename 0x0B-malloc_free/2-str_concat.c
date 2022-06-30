#include "main.h"

/**
 * str_concat - concatenates two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to nestr
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, len3, i;
	char *arr;

	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (*(s1 + len1) != '\0')
		len1++;

	len2 = 0;
	while (*(s2 + len2) != '\0')
		len2++;

	len3 = len1 + len2;
	arr = (char *) malloc(len3 * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);
	len2 = 0;
	while (i < len3)
	{
		if (i <= len1)
			arr[i] = s1[i];
		if (i > len1)
		{
			arr[i] = s2[len2];
			len2++;
		}
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
