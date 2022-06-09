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
	char word[] = "_putchar";

	int i = 1;

	for (i = 1; i < 9; i++)
	{
		putchar(word[i]);
	}
	putchar(10);

	return (0);
}
