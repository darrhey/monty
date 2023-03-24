#include "monty.h"
/**
 * free_stack - frees a doubly linked list
 * @head: stack head
 * Return: nothing
 */
void free_stack(stack_t *head)
{
stack_t *h;
h = head;
while (head)
{
h = head->next;
free(head);
head = h;
}
}
