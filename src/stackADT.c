#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#include "hdr.h"

// I think keeping the struct here is that the user can expand the struct by adding
// new types.
struct Record 
{
    char *name;
};

struct Stack
{
    char *name;
    int *data;
    int ptr;
    int size;
    struct Record record; 
};

stack_t new_stack(const int size)
{
    stack_t stack;

    if((stack = malloc(sizeof(stack_t))) == NULL) exit(EXIT_FAILURE);

    if((stack->data = malloc(size * sizeof(int))) == NULL)
    {
        free(stack);
        exit(EXIT_FAILURE);
    }

    if((stack->name = malloc(size * sizeof(char *))) == NULL)
    {
        free(stack);
        exit(EXIT_FAILURE);
    }

    stack->ptr = 0;
    stack->size = size;

    printf("Stack Created\n");

    return stack;
}

int isEmpty(stack_t stack)
{
    return stack->ptr == 0;
}

int isFull(stack_t stack)
{
    return (stack->ptr == stack->size);
}

void push(stack_t stack, const int item)
{
    if(isFull(stack))
    {
        printf("Stack is full");
        exit(EXIT_FAILURE);
    }

    stack->data[stack->ptr] = item;
    stack->ptr++;

    printf("stack->[ %d ] - %d\n", item, stack->ptr);
    peek(stack);
}

void peek(stack_t stack)
{
    // we're trying to see the value of the node in which ptr points to. If I 
    // try to read the value of the Node that ptr is currently pointing to it would
    // be 0 - that's why I decrement the ptr variable. 
    printf("peek -> %d\n", stack->data[stack->ptr--]);
}
