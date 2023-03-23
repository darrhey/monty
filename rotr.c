#include "monty.h"
/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line_number
 * Return: nothing
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *tmp;
tmp = *head;
if (*head == NULL || (*head)->next == NULL)
{
return;
}
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = *head;
tmp->prev->next = NULL;
tmp->prev = NULL;
(*head)->prev = tmp;
(*head) = h;
}
