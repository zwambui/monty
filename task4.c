#include "monty.h"

/**
 * _add - Adds the top two values of a stack_t linked list.
 * @doubly: head of the linked list
 * @cline: line number
 * Description: The result is stored in the second value node
 * from the top and the top value  is removed.
 */

void _add(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: ERROR:Stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	_pop(doubly, cline);
}
