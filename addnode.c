#include "monty.h"
/**
 * addnode - add node to the top of the stack
 * @head: stack head
 * @n: new value
 * Return: nothing
 */
void addnode(stack_t **head, int n)
{
stack_t *tmp, *h;
h = *head;
tmp = malloc(sizeof(stack_t));
if (tmp == NULL)
{
printf("Error\n");
exit(0);
}
if (h)
h->prev = tmp;
tmp->n = n;
tmp->next = *head;
tmp->prev = NULL;
*head = tmp;
}
