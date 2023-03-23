#include "monty.h"

/**
 * _add - add top two elements of stack
 * @stack: pointer to top of stack
 * @line_number: where the line number appears
 *
 * Return: nothing upon success, or EXIT_FAILURE upon fail
 */
void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		fclose(file);
		free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n += first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
