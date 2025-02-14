/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrodri <natrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:29:00 by natrodri          #+#    #+#             */
/*   Updated: 2025/02/14 04:09:04 by natrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	rrotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*end;

	if (!(*stack) || !((*stack)->next))
		return ;
	temp = *stack;
	end = ft_lstlast(*stack);
	while ((*stack)->next->next)
		*stack = (*stack)->next;
	end->next = temp;
	(*stack)->next = NULL;
	*stack = end;
	write (1, "rrotate\n", 9);
}
