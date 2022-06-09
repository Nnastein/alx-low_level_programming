#include "main.h"

/**
 * jack_bauer - prints every min of the day
 *
 * Description - prints 00:00 to 23:59
 *
 * Return: an integer
 */

void jack_bauer(void)
{
	int i, j, k, l;

	i = 48;
	while (i < 51)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 54)
			{
				l = 48;
				while (l > 58)
				{
					if (i >= 50 && j >= 52)
					{
						break;
					}
					else
					{
						putchar(i);
						putchar(j);
						putchar(58);
						putchar(k);
						putchar(l);
						putchar(10);
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}

	return (0);
}
