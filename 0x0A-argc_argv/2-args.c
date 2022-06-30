#include "main.h"
#include <stdio.h>

/**
 * main - prints all args it receives
 * @argc: num of args
 * @argv: arr pf args
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
