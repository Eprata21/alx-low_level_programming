#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that free alist_t
 * @head: list_t that to be freed
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
