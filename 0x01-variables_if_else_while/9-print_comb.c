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
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}
