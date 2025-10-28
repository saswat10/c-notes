/* Name: 1.2 */
/* Description: Experiment to find out what happens when prints's argument string contains \c, where c is some character not listed above.  */
/* Author: saswat10 */

#include <stdio.h>

int main()
{
    printf("hello, ");
    printf("world\9"); /* will show unknown escape sequence while compiling */
    printf("\n");
    return 0;
}