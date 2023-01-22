/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ole <ole@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:10:06 by ole               #+#    #+#             */
/*   Updated: 2023/01/22 11:10:08 by ole              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ra(s_stack *sk)
{
    write(1, "ra\n", 4);
    int temp;
    int i;

    i = sk->size_a - 1;
    temp = sk->val_a[sk->size_a - 1];
    while (i > 0)
    {
        sk->val_a[i] = sk->val_a[i - 1];
        i--;
    }
    sk->val_a[0] = temp;
}

void rb(s_stack *sk)
{
    write(1, "rb\n", 4);
    int temp;
    int i;

    i = sk->size_b - 1;
    temp = sk->val_b[sk->size_b - 1];
    while (i > 0)
    {
        sk->val_b[i] = sk->val_b[i - 1];
        i--;
    }
    sk->val_b[0] = temp;
}

void rr(s_stack *sk)
{
    write(1, "rr\n", 4);
    ra(sk);
    rb(sk);
}

int main(void)
{
    s_stack *sk;
    sk = init_stack();
    push_b(sk, 1);
    push_b(sk, 2);
    push_b(sk, 3);
    push_b(sk, 4);
    rrb(sk);
    printf("%d\n", pop_b(sk));
    printf("%d\n", pop_b(sk));
    printf("%d\n", pop_b(sk));
    printf("%d\n", pop_b(sk));
}

