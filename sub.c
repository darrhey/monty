#include "monty.h"
/**
 * f_sub - subtraction of elements of the stack
 * @head: stack head
 * @counter: line_number
 * Return: nothing
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *h;
int nodes; i;
h = *head;
for (nodes = 0; h != NULL; nodes++)
h = h->next;
if (nodes < 2)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
i = h->next->n - h->n;
h->next->n = i;
*head = h->next;
free(h);
}
