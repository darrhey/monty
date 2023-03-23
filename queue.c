#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: nothing
 */
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 1;
}

/**
 * addqueue - add node to the end of the stack
 * @head: stack head
 * @n: new value
 * Return: nothing
 */
void addqueue(stack_t **head, int n)
{
stack_t *tmp, *h;
h = *head;
tmp = malloc(sizeof(stack_t));
if (tmp == NULL)
{
print("Error\n");
}
tmp->n = n;
tmp->next = NULL;
if (!h)
{
*head = tmp;
tmp->prev = NULL;
}
else
{
h->next = tmp;
tmp->prev = j;
}
}
