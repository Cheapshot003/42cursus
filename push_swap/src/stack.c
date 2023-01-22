/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:09:45 by ole               #+#    #+#             */
/*   Updated: 2023/01/22 11:09:46 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void push_a(s_stack *sp, int value)
{
    int temp_top;

    if (sp->top_a == sp->size_a-1)
    {
        int *temp = (int*)malloc(sizeof(int) * sp->size_a + 1);
        if (temp == NULL)
        {
            write(1, "NO MEMORY", 10);
            return ;
        }
        temp_top = sp->top_a;
        while(sp->top_a >= 0)
        {
            temp[sp->top_a] = sp->val_a[sp->top_a];
            sp->top_a -= 1; 
            }
        free(sp->val_a);
        sp->val_a = temp;
        sp->size_a += 1;
        sp->top_a = temp_top;
    }

    sp->val_a[++sp->top_a] = value;
}

void push_b(s_stack *sp, int value)
{
    int temp_top;

    if (sp->top_b == sp->size_b-1)
    {
        int *temp = (int*)malloc(sizeof(int) * sp->size_b + 1);
        if (temp == NULL)
        {
            write(1, "NO MEMORY", 10);
            return ;
        }
        temp_top = sp->top_b;
        while(sp->top_b >= 0)
        {
            temp[sp->top_b] = sp->val_b[sp->top_b];
            sp->top_b -= 1; 
        }
        free(sp->val_b);
        sp->val_b = temp;
        sp->size_b += 1;
        sp->top_b = temp_top;
    }

    sp->val_b[++sp->top_b] = value;
}

int pop_a(s_stack *sp)
{
    int value;
    int *temp;
    int temp_top;

    if (sp->top_a == -1)
    {
        write(1, "STACK EMPTY", 12);
        return (0);
    }
    value = sp->val_a[sp->top_a];
    temp_top = sp->top_a;
    temp = (int*)malloc(sizeof(int) * sp->top_a);
    if (temp == NULL)
    {
        write(1, "NO MEMORY", 10);
    }
    while(sp->top_a >= 0)
    {
        temp[sp->top_a] = sp->val_a[sp->top_a];
        sp->top_a -= 1;
    }
    sp->top_a = temp_top - 1;
    free(sp->val_a);
    sp->val_a = temp;
    sp->size_a -= 1;
    return (value);
}

int pop_b(s_stack *sp)
{
    int value;
    int *temp;
    int temp_top;

    if (sp->top_b == -1)
    {
        write(1, "STACK EMPTY", 12);
        return (0);
    }
    value = sp->val_b[sp->top_b];
    temp_top = sp->top_b;
    temp = (int*)malloc(sizeof(int) * sp->top_b);
    if (temp == NULL)
    {
        write(1, "NO MEMORY", 10);
    }
    while(sp->top_b >= 0)
    {
        temp[sp->top_b] = sp->val_b[sp->top_b];
        sp->top_b -= 1;
    }
    sp->top_b = temp_top - 1;
    free(sp->val_b);
    sp->val_b = temp;
    sp->size_b -= 1;

    return (value);
}

s_stack *init_stack(void)
{
    s_stack *sk;
    sk = malloc(sizeof(s_stack));
    sk->size_a = 0;
    sk->size_b = 0;
    sk->top_a = -1;
    sk->top_b = -1;
    return (sk);
}