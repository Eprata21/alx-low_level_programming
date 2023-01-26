#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node_end - adds new node at the ende of lists
 * @head: the fiest value
 * @str: pointer value
 * Return: the address of the new element or null it it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);
	n->str = strdup(str);
	n->len = len;
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = n;
	return (n);
}
