#include "push_swap.h"
#include <stdio.h>

int list_size(t_stack *head)
{
    t_stack *tmp;
    int i;

    tmp = head;
    while (tmp->next)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

t_stack *creatnode(int   data)
{
    t_stack *node;

    node = malloc(sizeof(t_stack));
    if (!node)
        exit (1);
    node->content = data;
    node->next = NULL;
    node->previous = NULL;
    return (node);
}

void addnode(t_stack **stack, int data)
{
    t_stack *newnode;
    t_stack *tmp;

    newnode = creatnode(data);
    if (*stack == NULL)
    {
        *stack = newnode;
        return ;
    }
    tmp = *stack;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = newnode;
    newnode->previous = tmp;
}

int main(int argc, char **argv)
{
    t_stack *stack = NULL;
    char    **nums;
    int     *arr;
    int     count;
    int     i;

    i = 0;
    if (argc == 2)
    {
        count = list_size(stack);
        arr = malloc (count * sizeof(int));
        nums = ft_split(argv[1], ' ');
        while (nums[i])
        {
            addnode(&stack, atoi(nums[i]));
            arr[i] = atoi(nums[i]);
            i++;
        }
        RadixSort(&stack, arr, count);
        /*swap(&stack);
        tmp = stack;
        printf("\n\nDEPOIS:\n");
        while (tmp->next != NULL)
        {
            printf("%d ->", tmp->content);
            tmp = tmp->next;
        }
        printf("%d", tmp->content);*/
    }
    else
        printf("argumentos invalidos");
    return (0);
}