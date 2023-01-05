#include "main.h"

int fuct_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - function name
 * @n: natural number
 * Return: function
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (fuct_sqrt_recursion(n, 0));
}
/**
 * fuct_sqrt_recursion - function name
 * @n: parameter
 * @i: parameter
 * Return: 1 if  n is prime number else 0
 */
int fuct_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (fuct_sqrt_recursion(n, i + 1));
}
