/* Name: 1.3 */
/* Description:Modify the temperature conversion program to print a heading above the table. */
/* Author: saswat10 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("\nFahrenheit  Celsius\n");
    printf("----------  -------\n");
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%.2f\t%10.2f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}