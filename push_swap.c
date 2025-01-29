#include "push_swap.h"
#include <stdio.h>

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
    t_stack *tmp;
    int     i;

    i = 0;
    if (argc == 2)
    {
        nums = ft_split(argv[1], ' ');
        while (nums[i])
        {
            addnode(&stack, atoi(nums[i]));
            i++;
        }
        tmp = stack;
        printf("ANTES:\n");
        while (tmp->next != NULL)
        {
            printf("%d ->", tmp->content);
            tmp = tmp->next;
        }
        printf("%d", tmp->content);
        swap(&stack);
        tmp = stack;
        printf("\n\nDEPOIS:\n");
        while (tmp->next != NULL)
        {
            printf("%d ->", tmp->content);
            tmp = tmp->next;
        }
        printf("%d", tmp->content);
    }
    else
        printf("argumentos invalidos");
    return (0);
}