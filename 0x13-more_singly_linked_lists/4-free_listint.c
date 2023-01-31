#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - to delete 
 * @head: first node
 * Return: last node
 */
void free_listint(listint_t *head)
{
    listint_t *curr;
    listint_t *s;
    curr = head;
    while (curr != NULL)
    {
        s = curr->next;
        free (curr);
        curr = s; 
    }
}
