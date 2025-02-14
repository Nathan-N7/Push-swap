/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natrodri <natrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:27:58 by natrodri          #+#    #+#             */
/*   Updated: 2025/02/14 04:07:17 by natrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
	struct s_stack	*previous;
	int				count;
}	t_stack;

void	swap(t_stack **stack);
void	rotate(t_stack **stack);
void	rrotate(t_stack **stack);
void	push(t_stack **x, t_stack **y);
char	**ft_split(char const *str, char c);
void	radix_sort(t_stack **head, t_stack *stack_b, int size);
void	add_index(t_stack *head, int *arr, int size);
void	sort(int *arr, int size);
int		list_size(t_stack *head);
int		repetition(t_stack **stack);
int		invalid_arg(char *str);
void	addnode(t_stack **stack, int data);
void	free_nodes(t_stack *stack);
void	single_arg(char *arg, t_stack **stack, int **arr);
void	multiple_arg(int argc, char **argv, t_stack **stack, int **arr);
void	print_stack(t_stack *stack);
int		check(t_stack *head);
int		max_min(long val);
long	ft_atol(const char *nptr);
int		ft_atoi(const char *nptr);
int		get_position(t_stack **stack, int index);
int		find_min(t_stack **stack);
void	smallsort(t_stack **stack_a, t_stack **stack_b, int size);

#endif
