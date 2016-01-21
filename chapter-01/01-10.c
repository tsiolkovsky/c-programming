#include <stdio.h>

/* Write a program to copy its input to its output, replacing each tab with \t,
 * each backspace with \b, and each backslash by \\.
 */

int main(void){
    int c = 0;

    // Use ascii constants to make character comparisons
    while((c = getchar()) != EOF){
        if (c == 92){ //forward slash
            printf("\\\\");
            continue;
        }
        if (c == 9){ //tab (horizontal tab)
            printf("\\t");
            continue;
        }
        if (c == 8){ //backspace
            printf("\\b");
            continue;
        }
        else {
            printf("%c", c);
        }
    }
}
