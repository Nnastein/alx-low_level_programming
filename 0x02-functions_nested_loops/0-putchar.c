#include <stdio.h>

/**
 * main - print _putchar
 *
 * Description - prints using putchar
 *
 * Return 0 (Success)
 */

int main(void)
{
	char word[10] = "_putchar";

	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar(word[i]);
	}
	putchar(10);

	return (0);
}
