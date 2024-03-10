#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hdr.h"

int main(void)
{
    stack_t stack = create_stack();

    push(stack, 100);
    
    return 0;
}
