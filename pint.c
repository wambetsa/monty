#include "monty.h"
/**
 * m_pint - prints top val of the stack or exit on empty stack
 * @stack: d-pointer to stack head
 * @line_number: current operation line number
 * Return: void
 */

void m_pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (var.stack_len == 0)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pint, stack empty\n",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
