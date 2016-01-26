#include <stdio.h>

#define IN  1 // in a 'space' section 
#define OUT 0 // outside of a 'space' section

int main(void)
{
    int c, state;
    c = 0;
    state = OUT;

    while ((c=getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == OUT) {
                printf("\n");
                state = IN;
            }
        } else {
            printf("%c", c);
            state = OUT;
        }
    }
    return 0;
}

