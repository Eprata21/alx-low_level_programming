#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function tha returns number of elements
 * @h: number of element
 * Return: pointer type
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
