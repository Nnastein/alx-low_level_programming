#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - determine if number is positive or negative
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goses here */
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf("and is greater than 5 \n");
	}
	else if (n == 0)
	{
		printf("and is 0 \n");
	}
	else if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0 \n");
	}
	return (0);
}
