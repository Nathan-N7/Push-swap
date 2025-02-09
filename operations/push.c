#include "../push_swap.h"

void    push(t_stack **x, t_stack **y)
{
    t_stack *tmp;
    t_stack *second;
    if (!(*x) || !(*x)->next)
        return ;
    tmp = *x;
    second = tmp->next;
    while ((*y)->next)
        *y = (*y)->next;
    (*y)->next = tmp;
    tmp->previous = *y;
    second->previous = *x;
    *x = second;
}