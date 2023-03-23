#include "monty.h"

/**
 * _pint - print top element of stack
 * @stack: pointer to head of stack
 * @line_number: where the instruction appears
 *
 * Return: nothing if success, EXIT_FAILURE if fail
 */
void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		fclose(file);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
