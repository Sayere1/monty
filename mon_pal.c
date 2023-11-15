#include "monty.h"

/**
 * f_pall - prints stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *t;
	(void)counter;

	t = *head;
	if (t == NULL)
		return;
	while (t)
	{
		printf("%d\n", h->n);
		t = t->next;
	}
}
