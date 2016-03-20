#include <stdio.h>

/* print Fahrenheit-Clesius table
 * for fahr = 0, 20, ..., 300; floating-point version */

double f2c(float fahrenheit);

int main(void){
    float fahr;
    int lower, upper, step;

    lower = 0;  /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("Fahrenheit | Celsius\n");
    printf("-----------+--------\n");
    while (fahr <= upper) {
        printf("%10.0f | %7.1f\n", fahr, f2c(fahr));
        fahr = fahr + step;
    }
}

double f2c(float fahrenheit){
    return (5.0/9.0) * (fahrenheit-32.0);
}
