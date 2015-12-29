#include <stdio.h>

/* print Celsius to Fahrenheit table
 * for celsius = -20, -10, ..., 150; floating-point version */

int main(void){
    // use 'double' because we multiply 2 'float's to get fahr
    double fahr;
    float celsius;
    int lower, upper, step;

    lower = -20;  /* lower limit of temperature table */
    upper = 150;    /* upper limit */
    step = 10;      /* step size */

    celsius = lower;
    printf("Celsius | Fahrenheit\n");
    printf("--------+-----------\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%7.0f | %10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
