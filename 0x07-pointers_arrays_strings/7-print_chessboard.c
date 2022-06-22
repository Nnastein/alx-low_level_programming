#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: arg one kain
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
			j++;
		}
		i++;
	}
}
