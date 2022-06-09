#include "stdio.h"

/**
 * main - print alphabets
 *
 * Description - prints in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
}
