#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hdr.h"

#define STACK_SIZE 20

int main(void)
{
    stack_t stack = new_stack(STACK_SIZE);
    push(stack, 100);
    
    return 0;
}
