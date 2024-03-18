#include <curl/curl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aes.h"
#include "hdr.h"

#define STACK_SIZE 20

int main(void)
{
    stack_t stack = new_stack(STACK_SIZE);
    int n;

    for(;;)
    {
        printf("Enter an integer => ");

        scanf("%d", &n);

        if(n == 0)
            return 0;

        push(stack, n);

        printf("peek(stack) -> ", peek(stack));
    }

    // push(stack, 100);

    free(stack);
    
    return 0;
}
