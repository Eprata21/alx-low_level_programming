#include "main.h"

/**
 * swap_int - swaping of integer
 * @a: intger
 * @b: intger
 * Return: swap integer
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
