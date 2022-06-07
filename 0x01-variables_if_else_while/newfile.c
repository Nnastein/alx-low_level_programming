#include <stdio.h>

/**
 * main - print combo of two digits
 *
 * Description: the two digits must be different
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	int i = 48;

	while(i < 57)
	{
		int j = 49;
		while(j <= 57)
		{
			putchar(i);
			putchar(j);
			if(i < 56 || j < 57)
			{
			putchar(44);
			putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
