#include <stdlib.h>
#include <string.h>
#include <stdio.h>
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
size_t print_listint(const listint_t *h)
{
    size_t n = 0;
    while (h)
    {
        printf("%d\n", h->n);
        n++;
        h = h->next;
    }
    return (n);
}
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *last;
    new =malloc(sizeof(listint_t));
    if (new == NULL)
    return (NULL);
    
    new->n = n;
    new->next = NULL;
    if (*head == NULL)
    {
        *head = new;
        last = new;
    }
    else {
    last->next = new;
    last = new;
    }
    return (new);
}
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
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    free_listint(head);
    head = NULL;
    return (0);
}
