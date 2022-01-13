#ifndef TEST_H
# define TEST_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	int				min_int;
	int				max_int;
}	t_stack;

void ft_chang(t_stack *stack);

#endif
