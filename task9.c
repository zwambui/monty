#include "monty.h"

/**
 * _mod - computes the rest of the division of the second element
 * by the top element of the stack
 * @doubly: head of the linked list
 * @cline: line number;
 * Return: no return
 * info:The result is stored in 2nd value node from the top
 * and top value removed.
 */

void _mod(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't mod, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	if ((*doubly)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n %= (*doubly)->n;
	_pop(doubly, cline);
}
