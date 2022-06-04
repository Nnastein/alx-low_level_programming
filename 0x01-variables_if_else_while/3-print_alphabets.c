#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	
	int j = 65;

	while (j < 90)
	{
		putchar(j);
		j++;
	}

	putchar(10);
	return (0);
}
