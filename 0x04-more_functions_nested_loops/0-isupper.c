#include "main.h"

/**
 * _isupper(c)) - whatever
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		c = 1;
	}
	else if (c > 96 && c < 123)
	{
		c = 0;
	}
	return (c);
}
