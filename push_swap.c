#include "push_swap.h"
#include <stdio.h>

void    free_nodes(t_stack  *stack)
{
    t_stack *tmp;

    while (stack != NULL)
    {
        tmp = stack->next;
        free(stack);
        stack = tmp;
    }
}

int list_size(t_stack *head)
{
    t_stack *tmp;
    int i;

    i = 0;
    tmp = head;
    while (tmp != NULL)
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
    char **nums;
    int *arr;
    int count;
    int i = -1;

    if (argc == 2)
    {
        nums = ft_split(argv[1], ' ');
        while (nums[++i])
        {
            addnode(&stack, atoi(nums[i]));
            free(nums[i]);
        }
        free(nums);
        count = list_size(stack);
        if (repetition(&stack) == 0)
        {
            printf("Contem valor repitido");
            free_nodes(stack);
            return (0);
        }
        arr = malloc(count * sizeof(int));
        if (!arr)
        {
            free_nodes(stack);
            return (0);
        }
        i = 0;
        t_stack *tmp = stack;
        while (tmp)
        {
            arr[i++] = tmp->content;
            tmp = tmp->next;
        }
        sort(arr, count);
        add_index(stack, arr, count);
        RadixSort(&stack, count);
        while (stack)
        {
            printf("CONTENT = %d, INDEX = %d\n", stack->content, stack->index);
            stack = stack->next;
        }
        free_nodes(stack);
        free(arr);
    }
    else
        printf("Argumentos inválidos\n");
    return (0);
}