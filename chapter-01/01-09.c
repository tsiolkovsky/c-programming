#include <stdio.h>

#define IN  1  /* inside blanks */
#define OUT 0  /* outside blanks */

int main(void){
    /* Copy input to output, replacing each string of one or more blanks with
     * a single blank.
     */
    int c = 0;
    int state = OUT;

    while( (c=getchar()) != EOF ){
        if (c != ' '){
            printf("%c", c);
            state = OUT;
        }
        if (c == ' ' && state == OUT){
            printf("%c", c);
            state = IN;
        } 
    }
    return 0;
}
