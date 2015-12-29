#include <stdio.h>

/* print Fahrenheit-Clesius table
 * for fahr = 0, 20, ..., 300; floating-point version */

int main(void){
    double celsius;
    float fahr;
    int lower, upper, step;

    lower = 0;  /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;
    printf("Fahrenheit | Celsius\n");
    printf("-----------+--------\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%10.0f | %7.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
