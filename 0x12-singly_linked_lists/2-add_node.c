#include <stdlib.h>
#include "lists.h"

/**
 * *add_node - function tha adds a new node at the beginning of lists
 * @str: pointer that duplicated
 * @head: first element
 * Return:the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
