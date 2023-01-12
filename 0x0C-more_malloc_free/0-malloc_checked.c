#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - function that alloctes momery
 * @b: pointer
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
