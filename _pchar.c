#include "monty.h"

/**
 * _pchar - print the char at top of stack
 * @stack: pointer to head of stack
 * @line_number: where the instruction appears
 *
 * Return: nothing if success, EXIT_FAILURE if fail
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	if ((stack == NULL) || ((*stack) == NULL))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		fclose(file);
		_free(*stack);
		exit(EXIT_FAILURE);
	}
	if (!(isascii((*stack)->n)))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		fclose(file);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
