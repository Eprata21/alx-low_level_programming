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
/**
 * *add_nodeint - function that adds new node at the beginging
 * @head: first node
 * @n: number of node
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
