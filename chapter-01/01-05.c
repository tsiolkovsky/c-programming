#include <stdio.h>

/* print Fahrenheit-Celsius table */
int main(void){
    int fahr;

    // replace magic numbers with constants
    int START = 300;
    int STOP = 0;
    int STEP = -20;

    for (fahr = START; fahr >= STOP; fahr = fahr + STEP){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}
