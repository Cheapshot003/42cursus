#include "push_swap.h"

void rra(s_stack *sk)
{
    int temp;
    int i;

    i = 0;
    temp = sk->val_a[0];
    while (i < sk->size_a - 1)
    {
        sk->val_a[i] = sk->val_a[i + 1];
        i++;
    }
    sk->val_a[sk->size_a - 1] = temp;
}

void rrb(s_stack *sk)
{
    int temp;
    int i;

    i = 0;
    temp = sk->val_b[0];
    while (i < sk->size_b - 1)
    {
        sk->val_b[i] = sk->val_b[i + 1];
        i++;
    }
    sk->val_b[sk->size_b - 1] = temp;
}

void rrr(s_stack *sk)
{
    rra(sk);
    rrb(sk);
}