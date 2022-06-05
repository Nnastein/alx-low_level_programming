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
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(i + 48);
		}
		else
		{
			putchar(i + 87);
		}
		i++;
	}
	putchar(10);
	return (0);
}
