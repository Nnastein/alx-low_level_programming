#include <stdio.h>

/** main - print _putchar
 *
 * Return 0 Always
 */

int main(void)
{
	char word[10] = "_putchar";

	int i = 0;

	for (i = 0; i < 9; i++)
	{
		putchar(word[i]);
	}
	putchar('\n');

	return (0);
}
