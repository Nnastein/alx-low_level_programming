#include "main.h"

/**
 * _islower - checks lowercase
 *
 * @c: an ascii char
 *
 * Description - Wo
 *
 * Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
