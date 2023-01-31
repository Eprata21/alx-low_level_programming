#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function returns number of elements in the linked
 * @h: first link
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	listint_t n = 0;

	while (h)
	{
		n++
			h = h->next;
	}
	return (n);
}
