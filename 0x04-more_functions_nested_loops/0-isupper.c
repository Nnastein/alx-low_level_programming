#include "main.h"

/**
 * _isupper - whatever
 * @c : checks the case
 * 
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c > '@' && c < '[')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
