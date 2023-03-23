#include "monty.h"

/**
 * _pop - pop top element of stack
 * @stack: pointer to top of stack
 * @line_number: where the line number appears
 *
 * Return: nothing if success, EXIT_FAILURE if fail
 */
void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *first;

	if ((*stack == NULL) || (stack == NULL))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(file);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	first = *stack;
	*stack = (*stack)->next;
	if (first->next)
	{
		first->next->prev = NULL;
	}
	free(first);
}
