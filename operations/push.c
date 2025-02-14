/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrodri <natrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:28:49 by natrodri          #+#    #+#             */
/*   Updated: 2025/02/14 04:09:45 by natrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **x, t_stack **y)
{
	t_stack	*tmp;

	write (1, "push", 5);
	write (1, "\n", 2);
	if (!(*x))
		return ;
	tmp = *x;
	*x = (*x)->next;
	if (*x)
		(*x)->previous = NULL;
	tmp->next = *y;
	if (*y)
		(*y)->previous = tmp;
	*y = tmp;
}
