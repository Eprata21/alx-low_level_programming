#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the function returns sum
 * @n: natural number
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list list;

	va_start(lis, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
