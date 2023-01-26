#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * *add_node - function tha adds a new node at the beginning of lists
 * @str: pointer that duplicated
 * @head: first element
 * Return:the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
