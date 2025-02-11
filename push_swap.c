#include "push_swap.h"
#include <stdio.h>

void	free_nodes(t_stack *stack)
{
	t_stack	*tmp;

	while (stack != NULL)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}

int	list_size(t_stack *head)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

t_stack	*creatnode(int data)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		exit (1);
	node->content = data;
	node->next = NULL;
	node->previous = NULL;
	return (node);
}

void	addnode(t_stack **stack, int data)
{
	t_stack	*newnode;
	t_stack	*tmp;

	newnode = creatnode(data);
	if (*stack == NULL)
	{
		*stack = newnode;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = newnode;
	newnode->previous = tmp;
}

int	main(int argc, char **argv)
{
	t_stack	*stack;
	t_stack	*stack_b;
	int		*arr;

	stack_b = NULL;
	stack = NULL;
	if (argc == 1)
	{
		printf("argumentos invalidos\n");
		return (0);
	}
	if (argc == 2)
		single_arg(argv[1], &stack, &arr);
	else
		multiple_arg(argc, argv, &stack, &arr);
	if (!stack)
		return (0);
	radix_sort(&stack, stack_b, stack->count);
	print_stack(stack);
	free_nodes(stack);
	free(arr);
	return (0);
}
