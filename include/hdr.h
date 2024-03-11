#ifndef HDR_H
#define HDR_H

typedef struct Stack *stack_t;  // in complete type

stack_t new_stack(int);
void push(stack_t, const int);
int isFull(stack_t);
int isEmpty(stack_t);

#endif
