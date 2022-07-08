#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: first arg
 *
 * Return: an int sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list ap;
		int i, m, sum;

		va_start(ap, n);
		sum = 0;
		for (i = n; i < 10000; i = va_arg(ap, int))
			sum = sum + i;
		va_end(ap);
		m = sum - n;
		return (m);
	}
	return (0);
}
