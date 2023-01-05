#include "main.h"

int prime_number(int n, int i);
/**
 * is_prime_number - functin name
 * @n: input integer
 * Return: function
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
/**
 * prime_number - function
 * @n: parametr
 * @i: parameter
 * Return: 1 if n is prime else 0
 */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_number(n, i - 1));
}
