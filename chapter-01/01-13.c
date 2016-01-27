#include <stdio.h>

#define IN  1  //in word
#define OUT 0  //outside word
#define LONGEST 20 //longest word length

int main(void)
{
    int c;
    int state;
    int length;
    int histogram[LONGEST]; //only record words as long as 20 chars

    c = state = length = 0;
    for (int i = 0; i < LONGEST - 1; i++) {
        histogram[i] = 0; // need to initialize values to zero
    }

    while ((c=getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN){
                if (length > LONGEST) {
                    length = LONGEST;
                }
                histogram[length]++;
                length = 0;
                state = OUT;
            }
        } else {
            state = IN;
            length++;
        }
        
    }

    for (int i = 1; i <= LONGEST; i++) {
        printf("%2d | ", i);
        for (int j = 0; j < histogram[i]; j++) {
            printf("\u2591");
        }
        printf("\n");
    }
    return 0;
}
