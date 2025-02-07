#include "push_swap.h"

int     check(t_stack *head)
{
    t_stack *tmp;

    tmp = head;
    while (tmp->next)
    {
        if (tmp->next->content < tmp->content)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

void    ()
{
    
}

int *sort(int *arr, int size)
{
    int temp;
    int i;
    int j;

    while (i < size)
    {
        j = 0;
        while (j < size - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            j++;
        }
        i++;
    }
    return (arr);
}

void    RadixSort(t_stack **head, int *arr,int size)
{
    int count;
    t_stack *tmp;
    t_stack *b;

    count = 0;
    tmp = *head;
    arr = sort(arr, size);
    while (count < size)
    {

    }
}