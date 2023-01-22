/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:09:52 by ole               #+#    #+#             */
/*   Updated: 2023/01/22 11:09:57 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sa(s_stack *sk)
{
    write(1, "sa\n", 4);
    int temp;
    int temp2;

    temp = pop_a(sk);
    temp2 = pop_a(sk);
    push_a(sk, temp2);
    push_a(sk, temp);
}

void sb(s_stack *sk)
{
    write(1, "sb\n", 4);
    int temp;
    int temp2;

    temp = pop_b(sk);
    temp2 = pop_b(sk);
    push_b(sk, temp2);
    push_b(sk, temp);
}

void ss(s_stack *sk)
{
    write(1, "ss\n", 4);
    sa(sk);
    sb(sk);
}

void pa(s_stack *sk)
{
    write(1, "pa\n", 4);
    push_a(sk, pop_b(sk));
}

void pb(s_stack *sk)
{
    write(1, "pb\n", 4);
    push_b(sk, pop_a(sk));
}