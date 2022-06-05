#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: print the single digit numbers
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
