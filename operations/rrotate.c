#include "push_swap.h"

void    rrotate(t_stack **stack)
{
    t_stack *my;
    t_stack *second;

    if (!(*stack) || !(*stack)->next || !(*stack)->next->next)
        return ;
    second = *stack;
    my = *stack;
    while (my->next)
        my = my->next;
    my->previous->next = NULL;
    *stack = my;
    second->previous = my;
    my->next = second;
}