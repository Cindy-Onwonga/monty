#include "monty.h"

/**
 * _mod - find modulus of top two elements
 * @stack: pointer to top of stack
 * @line_number: where the line number appears
 *
 * Return: nothing if success, EXIT_FAILURE if fail
 */
void _mod(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		fclose(file);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	else if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(file);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		first = *stack;
		second = first->next;
		second->n %= first->n;
		*stack = second;
		(*stack)->prev = NULL;
		free(first);
	}
}
