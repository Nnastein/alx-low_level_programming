#include <stdio.h>

/**
 * main - print combo of two digits
 *
 * Description: the two digits must be different
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	int i, j, k, m;

	i = 48;
	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = 48;
			while (k < 58)
			{
				m = 49;
				while (m < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(m);

					if (i < 57 || j < 56 || k < 57 || m < 57)
					{
						putchar(44);
						putchar(32);
					}
					m++;
				}
				k++;
			}

			j++;
		}

		i++;
	}

	putchar(10);
	return (0);
}
