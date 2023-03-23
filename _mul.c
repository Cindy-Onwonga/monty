#include "monty.h"

/**
 * _mul - multiply top two elements of stack
 * @stack: pointer to top of stack
 * @line_number: where the line number appears
 *
 * Return: nothing if success, EXIT_FAILURE if fail
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n *= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
