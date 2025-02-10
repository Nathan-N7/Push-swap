#include "push_swap.h"

int    repetition(t_stack **stack)
{
    t_stack *tmp;
    t_stack *verify;
    
    tmp = *stack;
    while (tmp != NULL)
    {
        verify = tmp->next;
        while (verify != NULL)
        {
            if (tmp->content == verify->content)
                return (0);
            verify = verify->next;
        }
        tmp = tmp->next;
    }
    return (1);
}