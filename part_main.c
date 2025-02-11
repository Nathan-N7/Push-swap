#include "push_swap.h"
#include <stdio.h>

void	fill_array(t_stack *stack, int *arr, int count)
{
	int		i;
	t_stack	*tmp;

	tmp = stack;
	i = 0;
	while (tmp && i < count)
	{
		arr[i++] = tmp->content;
		tmp = tmp->next;
	}
}

void	print_stack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp)
	{
		printf("CONTENT = %d, INDEX = %d\n", tmp->content, tmp->index);
		tmp = tmp->next;
	}
}

void	allocate_array(int *count, int **arr, t_stack **stack)
{
	*count = list_size(*stack);
	*arr = malloc((*count) * sizeof(int));
	if (!(*arr))
	{
		free_nodes(*stack);
		*stack = NULL;
		return ;
	}
	fill_array(*stack, *arr, *count);
	sort(*arr, *count);
	add_index(*stack, *arr, *count);
}

void	single_arg(char *arg, t_stack **stack, int **arr)
{
	int		i;
	char	**nums;

	i = -1;
	nums = ft_split(arg, ' ');
	while (nums[i + 1] != NULL)
	{
		i++;
		addnode(stack, atoi(nums[i]));
		free(nums[i]);
	}
	free(nums);
	(*stack)->count = list_size(*stack);
	if (repetition(stack) == 0)
	{
		printf("Contem valor repetido\n");
		free_nodes(*stack);
		stack = NULL;
		return ;
	}
	allocate_array(&(*stack)->count, arr, stack);
}

void	multiple_arg(int argc, char **argv, t_stack **stack, int **arr)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (argumment(argv[i]) == 0)
		{
			printf("voce tentou usar lista e numeros soltos ao mesmo tempo\n");
			free_nodes(*stack);
			*stack = NULL;
			return ;
		}
		addnode(stack, atoi(argv[i]));
	}
	if (repetition(stack) == 0)
	{
		printf("Contem valor repetido\n");
		free_nodes(*stack);
		*stack = NULL;
		return ;
	}
	allocate_array(&(*stack)->count, arr, stack);
}
