#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - function
 * @b: number
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
