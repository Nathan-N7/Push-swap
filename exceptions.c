#include "push_swap.h"

void	two(t_stack *stack)
{
    if (check(stack) == 0);
        swap(stack);
}

void	three(t_stack *stack)
{
    if (stack->content > stack->next->content)
        swap(stack);
    if (stack->next->content > stack->next->next->content)
        rrotate(stack);
    if (stack->content > stack->next->content)
        swap(stack);
}

void    four()
{
    
}

void    five()
{

}