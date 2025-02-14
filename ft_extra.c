/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrodri <natrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:28:11 by natrodri          #+#    #+#             */
/*   Updated: 2025/02/12 17:54:12 by natrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	invalid_arg(char *str)
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

t_stack	*min_node(t_stack *stack)
{
	long	min;
	t_stack	*tmp;

	min = 9223372036854775807;
	tmp = stack;
	while (tmp)
	{
		if (tmp->content < min)
			min = tmp->content;
		tmp = tmp->next;
	}
	return (tmp);
}

int	max_min(long val)
{
	if (val > 2147483647 || val < -2147483648)
	{
		write (1, "Error", 6);
		return (0);
	}
	return (1);
}
