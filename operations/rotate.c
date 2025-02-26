/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrodri <natrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:28:54 by natrodri          #+#    #+#             */
/*   Updated: 2025/02/14 04:08:30 by natrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*tmp;

	write (1, "rotate", 7);
	write (1, "\n", 2);
	if (!(*stack) || !(*stack)->next || !(*stack)->next->next)
		return ;
	last = *stack;
	tmp = *stack;
	while (last->next)
		last = last->next;
	*stack = tmp->next;
	tmp->previous = last;
	last->next = tmp;
	tmp->next = NULL;
}
