#include "stdio.h"

/**
 * main - print _putchar
 *
 * Description - prints using putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char word[] = "_putchar";

	int i = 0;

	for (i = 0; i < 8; i++)
	{
		putchar(word[i]);
	}
	putchar(10);

	return (0);
}
