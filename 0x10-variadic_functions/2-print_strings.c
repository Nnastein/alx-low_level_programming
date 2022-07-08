#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed
 * @n: number of strings passed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string != NULL)
		{
			printf("%s", string);
			if (i != n - 1)
			{
				if (separator != NULL)
					printf("%s", separator);
			}
		}
		else
		{
			printf("(nil)");
		}
	}
	printf("\n");
}
