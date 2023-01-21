#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include "libft/libft.h"
#include <stdio.h> //REMOVE BEFORE PUSH

typedef struct t_stack
{
    int* val_a;
    int top_a;
    int size_a;
    int* val_b;
    int top_b;
    int size_b;
} s_stack;
//stack operations
s_stack *init_stack(void);
void push_a(s_stack *sp, int val);
void push_b(s_stack *sp, int val);
int pop_a(s_stack *sp);
int peek_a(s_stack *sp);
int pop_b(s_stack *sp);
int peek_b(s_stack *sp);
//push_swap operations
void ra(s_stack *sp);
void rb(s_stack *sp);
void rr(s_stack *sp);
void rra(s_stack *sp);
void rrb(s_stack *sp);
void rrr(s_stack *sp);




#endif