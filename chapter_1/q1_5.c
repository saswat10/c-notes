/* Name: 1.5 */
/* Description: Prints the celsius to fahrenheit conversion table in reverse order. */
/* Author: saswat10 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -40;
    upper = 100;
    step = 10;

    celsius = upper;
    printf("Celsius  Fahrenheit\n");
    printf("-------  ----------\n");
    while(celsius >= lower) {
        fahr = ((9.0/5.0) * celsius)+32;
        printf("%.2f\t%8.2f\n", celsius, fahr);
        celsius = celsius - step;
    }

    return 0;
}