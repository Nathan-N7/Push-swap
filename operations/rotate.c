#include "../push_swap.h"

void    rotate(t_stack **stack)
{
    t_stack *last;
    t_stack *tmp;

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