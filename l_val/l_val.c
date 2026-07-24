/* Practice improper and proper l-values */
#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 10;

    /* Proper l-value: x is a modifiable l-value (a variable) */
    x = 15;

    /* Improper l-values (will cause compilation errors) */

    /* 5 = 15; */
    /* Error: 5 is an r-value (literal constant), not an l-value.
       L-values must be modifiable memory locations (variables). */

    /* 2x = 20; */
    /* Error: "2x" is not a valid identifier.
       "2x" is parsed as the number 2 followed by identifier "x" (invalid syntax).
       Even if written as "2 * x", the result of multiplication is an r-value (temporary),
       not an l-value (no memory address to store into). */

    /* x = 3y; */
    /* Error: "3y" is not valid syntax.
       "3y" parses as integer literal 3 followed by identifier "y" (invalid token).
       If meant as "3 * y", the result is an r-value (temporary computation result),
       which cannot be assigned to. Only l-values (variables) can appear on the left. */

    printf("x = %d, y = %d\n", x, y);

    return 0;
}