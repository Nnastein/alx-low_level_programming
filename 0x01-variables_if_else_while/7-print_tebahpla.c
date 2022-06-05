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
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
