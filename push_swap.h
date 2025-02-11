#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
	struct s_stack	*previous;
	int				count;
}	t_stack;

void	swap(t_stack **stack);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	rotate(t_stack **stack);
void	rrotate(t_stack **stack);
char	**ft_split(char const *str, char c);
void	radix_sort(t_stack **head, t_stack *stack_b, int size);
void	add_index(t_stack *head, int *arr, int size);
void	sort(int *arr, int size);
int		list_size(t_stack *head);
void	push(t_stack **x, t_stack **y);
int		repetition(t_stack **stack);
int		argumment(char *str);
void	addnode(t_stack **stack, int data);
void	free_nodes(t_stack *stack);
void	single_arg(char *arg, t_stack **stack, int **arr);
void	multiple_arg(int argc, char **argv, t_stack **stack, int **arr);
void	print_stack(t_stack *stack);

#endif
