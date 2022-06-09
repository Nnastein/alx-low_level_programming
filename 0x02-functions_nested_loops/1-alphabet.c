#include "stdio.h"

/**
 * main - print alphabets
 *
 * Description - prints in lowercase
 *
 * Return: 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

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
