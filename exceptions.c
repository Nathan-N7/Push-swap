/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrodri <natrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:28:37 by natrodri          #+#    #+#             */
/*   Updated: 2025/02/14 03:59:54 by natrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two(t_stack **stack_a)
{
	if ((*stack_a)->index > (*stack_a)->next->index)
		swap(stack_a);
}

void	three(t_stack **stack)
{
	if ((*stack)->content > (*stack)->next->content)
		swap(stack);
	if ((*stack)->next->content > (*stack)->next->next->content)
		rrotate(stack);
	if ((*stack)->content > (*stack)->next->content)
		swap(stack);
}

void	four(t_stack **stack_a, t_stack **stack_b)
{
	int	min_index;

	min_index = find_min(stack_a);
	while ((*stack_a)->index != min_index)
		rotate(stack_a);
	push(stack_a, stack_b);
	three(stack_a);
	push(stack_b, stack_a);
}

void	five(t_stack **stack_a, t_stack **stack_b)
{
	int	index_min;

	index_min = find_min(stack_a);
	while ((*stack_a)->index != index_min)
	{
		if (get_position(stack_a, index_min) <= 2)
			rotate(stack_a);
		else
			rrotate(stack_a);
	}
	push(stack_a, stack_b);
	index_min = find_min(stack_a);
	while ((*stack_a)->index != index_min)
	{
		if (get_position(stack_a, index_min) <= 2)
			rotate(stack_a);
		else
			rrotate(stack_a);
	}
	push(stack_a, stack_b);
	three(stack_a);
	push(stack_b, stack_a);
	push(stack_b, stack_a);
}

void	smallsort(t_stack **stack_a, t_stack **stack_b, int size)
{
	if (check(*stack_a) == 1)
		return ;
	else if (size == 2)
		two (stack_a);
	else if (size == 3)
		three(stack_a);
	else if (size == 4)
		four(stack_a, stack_b);
	else if (size == 5)
		five(stack_a, stack_b);
}
