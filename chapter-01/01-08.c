#include <stdio.h>

int main(void){
    int c, nl, sp, tab;

    sp = tab = nl = 0;
    while ((c = getchar()) != EOF){
        if (c == ' ')
            ++sp;
        if (c == '\t')
            ++tab;
        if (c == '\n')
            ++nl;
    }
    printf("%d blanks\n", sp);
    printf("%d tabs\n", tab);
    printf("%d lines\n", nl);

    return 0;
}
