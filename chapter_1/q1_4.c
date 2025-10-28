/* Name: 1.4 */
/* Description: Prints the celsius to fahrenheit conversion table. */
/* Author: saswat10 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -40;
    upper = 100;
    step = 10;

    celsius = lower;
    printf("Celsius  Fahrenheit\n");
    printf("-------  ----------\n");
    while(celsius <= upper) {
        fahr = ((9.0/5.0) * celsius)+32;
        printf("%.2f\t%8.2f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}