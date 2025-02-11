#include "push_swap.h"

int	repetition(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*verify;

	tmp = *stack;
	while (tmp != NULL)
	{
		verify = tmp->next;
		while (verify != NULL)
		{
			if (tmp->content == verify->content)
				return (0);
			verify = verify->next;
		}
		tmp = tmp->next;
	}
	return (1);
}

int	argumment(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i + 1] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int	*add_content(t_stack *stack, int count)
{
	t_stack	*tmp;
	int		i;
	int		*arr;

	tmp = stack;
	arr = malloc(count * sizeof(int));
	if (!arr)
	{
		free_nodes(stack);
		return (0);
	}
	i = 0;
	while (tmp)
	{
		arr[i++] = tmp->content;
		tmp = tmp->next;
	}
	return (arr);
}
