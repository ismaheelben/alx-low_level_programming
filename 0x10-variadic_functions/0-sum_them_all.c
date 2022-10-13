#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum of all parameters after n
 * @n: number of parameters received after n
 *
 * Return: sum of interger
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(valist, int);
	}
	va_end(valist);
	return (sum);
}
