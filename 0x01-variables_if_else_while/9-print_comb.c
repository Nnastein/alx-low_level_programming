#include <stdio.h>

/**
 * main - print small letter alphabets
 *
 * Description: print the alphabets backwards
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 57)
		{
			putchar(i);
			putchar(44);
		}
		else
		{
			putchar(i);
			putchar(36);
		}
		putchar(32);
		i++;
	}
	return (0);
}
