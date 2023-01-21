#include "push_swap.h"

void ra(s_stack *sk)
{
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

