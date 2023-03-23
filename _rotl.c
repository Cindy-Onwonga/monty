#include "monty.h"

/**
 * _rotl - rotate tail to top
 * @stack: pointer to top of stack
 * @line_number: where the line number appears
 *
 * Return: nothing if success, EXIT_FAILURE if fail
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *last;

	(void)line_number;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		;
	}
	else
	{
		first = last = *stack;
		while (last->next)
		{
			last = last->next;
		}
		*stack = first->next;
		last->next = first;
		first->prev = last;
		first->next = NULL;
		(*stack)->prev = NULL;
	}
}
