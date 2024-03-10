#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#include "hdr.h"

struct Stack
{
    int *data;
    int ptr;
    int size;
    struct Record record; 
};

stack_t create_stack(int size)
{
    stack_t stack;

    stack->size = size; //set the size of the stack
    stack->ptr = 0;

    return stack;
}
