#include "main.h"

/**
 * cap_string - Caps all words
 * @s: string
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;
	int position;

	while (s[i] != '\0')
	{
		if ((s[i] == ',' || s[i] == '.' || s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == ';' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}'))
		{
			if (s[i+1] >= 'a' && s[i+1] <= 'z')
			{
				position = s[i+1] - 'a';
				s[i+1] = ('A' + position);
			}
		}
		i++;
	}
	return (s);
}
