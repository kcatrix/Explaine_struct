#include "test.h"

void	init_struct(t_stack *stack)
{
	stack->min_int = 0;
	stack->max_int = 0;
}

int	main()
{
	t_stack stack;

	init_struct(&stack);
	stack.max_int = 3;
	printf("MAX BEFORE %d\n", stack.max_int);
	ft_chang(&stack);
	printf("MAX AFTER %d\n", stack.max_int);
	printf("MIN AFTER %d\n", stack.min_int);
}