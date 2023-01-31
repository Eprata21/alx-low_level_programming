#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints alll element
 * @h: pointer holds elemnt
 * Return: the numebr of node
 */
size_t print_listint(const listint_t *h)
{
	listint_t n = 0;

	while (h)
	{
		printf("%d", h->n, h->next);
		n++;
		h = h->next;
	}
	return (n);
}
