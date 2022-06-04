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
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar(10);
	return (0);
}
