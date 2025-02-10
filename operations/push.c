#include "../push_swap.h"

void    push(t_stack **x, t_stack **y)
{
    t_stack *tmp;
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