#include "push_swap.h"

int peek_a(s_stack *sp)
{
    if (sp->top_a == -1)
    {
        write(1, "STACK EMPTY", 12);
        return (0);
    }
    return (sp->val_a[sp->top_a]);
}

int peek_b(s_stack *sp)
{
    if (sp->top_b == -1)
    {
        write(1, "STACK EMPTY", 12);
        return (0);
    }
    return (sp->val_b[sp->top_b]);
}

