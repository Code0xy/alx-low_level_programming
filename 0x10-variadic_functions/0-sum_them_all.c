#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: amount of the arguments
 * Return: sum of its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int y;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (y = 0; y < n; y++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);

}

