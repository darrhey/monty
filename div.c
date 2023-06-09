#include "monty.h"
/**
 * f_div - divides the top two elements of the stack
 * @head: stack head
 * @counter: line_number
 * Return: nothing
 */
void f_div(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0; i;
h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%u: can't div, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
if (h->n == 0)
{
fprintf(stderr, "L%u: can't div, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
i = h->next->n / h->n;
h->next->n = i;
*head = h->next;
free(h);
}
