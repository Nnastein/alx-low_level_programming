#include "main.h"

/**
 * _isupper - whatever
 * @c : checks the case
 * 
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (0);
	}
}
