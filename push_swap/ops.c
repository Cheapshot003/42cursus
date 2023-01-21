#include "push_swap.h"

void sa(s_stack *sk)
{
    int temp;
    int temp2;

    temp = pop_a(sk);
    temp2 = pop_a(sk);
    push_a(sk, temp2);
    push_a(sk, temp);
}

void sb(s_stack *sk)
{
    int temp;
    int temp2;

    temp = pop_b(sk);
    temp2 = pop_b(sk);
    push_b(sk, temp2);
    push_b(sk, temp);
}

void ss(s_stack *sk)
{
    sa(sk);
    sb(sk);
}

void pa(s_stack *sk)
{
    push_a(sk, pop_b(sk));
}

void pb(s_stack *sk)
{
    push_b(sk, pop_a(sk));
}