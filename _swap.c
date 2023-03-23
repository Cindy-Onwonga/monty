#include "monty.h"

/**
 * _swap - swap top two elements of stack
 * @stack: pointer to top of stack
 * @line_number: where the line number appears
 *
 * Return: nothing if success, EXIT_FAILURE if fail
 */
void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *first, *second;

	if ((*stack == NULL) || ((*stack)->next == NULL))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(file);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	else if (*stack)
	{
		first = *stack;
		second = first->next;
		*stack = second;
		first->next = second->next;
		if (second->next != NULL)
		{
			second->next->prev = first;
		}
		second->prev = NULL;
		second->next = first;
		first->prev = second;
	}
}
