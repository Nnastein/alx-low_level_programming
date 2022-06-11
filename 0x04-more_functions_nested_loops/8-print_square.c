#include "main.h"

/**
 * print_square - draws a square
 * @size: varaible
 *
 * Return: void
 */

void print_square(int size)
{
	int num;

	if (size > 0)
	{
		for (num = 0; num < size; size++)
		{
			for (num = 0; num < size; size)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
