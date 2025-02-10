#include "push_swap.h"

int     check(t_stack *head)
{
    t_stack *tmp;

    if (!head)
        return (0);
    tmp = head;
    while (tmp->next)
    {
        if (tmp->next->content < tmp->content)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

void    sort(int *arr, int size)
{
    int temp;
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

void    add_index(t_stack *head, int *arr, int size)
{
    t_stack *tmp;
    int     i;

    tmp = head;
    while (tmp)
    {
        i = 0;
        while (i < size) {
            if (tmp->content == arr[i])
            {
                tmp->index = i;
                break;
            }
            i++;
        }
        tmp = tmp->next;
    }
}

void    RadixSort(t_stack **stack_a, int size)
{
    t_stack *stack_b = NULL;
    int num_elements;
    int max_bits;
    int i;
    int j;

    max_bits = 0;
    while ((size - 1) >> max_bits)
        max_bits++;
    i = 0;
    while (i < max_bits)
    {
        j = 0;
        num_elements = list_size(*stack_a);
        if (check(*stack_a))
            break;
        while (j < num_elements)
        {
            if (((*stack_a)->index >> i) & 1)
                push(stack_a, &stack_b);
            else
                rotate(stack_a);
            j++;
        }
        while (stack_b)
            push(&stack_b, stack_a);
        i++;
    }
}
