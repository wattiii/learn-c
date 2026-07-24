/* Sum of two integers */

#include <stdio.h>

int main()
{
    long int n, sum = 0;
    printf("Enter two integers (then 0 to run and terminate): ");
    scanf("%ld", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%ld", &n);
    }
    printf("Sum = %ld\n", sum);
    return 0;
}