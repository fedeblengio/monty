#include "monty.h"

void f_nop(stack_t **stack, unsigned int line_number)
{
	printf("stack: %p l_num: %i", (void *)stack, line_number);
}
void f_sub(stack_t **stack, unsigned int line_number)
{
	printf("stack: %p l_num: %i", (void *)stack, line_number);
}
void f_div(stack_t **stack, unsigned int line_number)
{
	printf("stack: %p l_num: %i", (void *)stack, line_number);
}
