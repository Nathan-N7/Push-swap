#ifndef PUSH_SWAP
# define PUSH_SWAP
#include <stdlib.h>

typedef struct  s_stack
{
    int content;
    int index;
    struct s_stack *next;
    struct s_stack *previous;
}   t_stack;

void    swap(t_stack  **stack);
void    ss(t_stack **stack_a, t_stack **stack_b);
void    rotate(t_stack **stack);
void    rrotate(t_stack **stack);
char	**ft_split(char const *str, char c);
void    RadixSort(t_stack **head, int size);
void    add_index(t_stack *head, int *arr, int size);
void    sort(int *arr, int size);
int     list_size(t_stack *head);
void    push(t_stack **x, t_stack **y);
int    repetition(t_stack **stack);

#endif