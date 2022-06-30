#include "main.h"
#include <stdio.h>

/**
 * main - prints num of args passed into it
 * @argc: num of args
 * @argv: arr pf args
 *
 * Return: (0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int args;

	args = argc - 1;
	printf("%d\n", args);
	return (0);
}
