#include "monty.h"

/**
 * _pall - print all elements of stack
 * @stack: pointer to head of stack
 * @line_number: where the instruction appears
 *
 * Return: nothing if success, EXIT_FAILURE if fail
 */
void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d", current->n);
		current = current->next;
		printf("\n");
	}
}
