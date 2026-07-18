/* Compute a UPC check digit */
#include <stdio.h>

int main(void)
{
    int digits[11];
    int sum_odd = 0, sum_even = 0, check_digit;

    printf("Enter the first 11 digits of the UPC (separated by spaces): ");
    for (int i = 0; i < 11; i++)
    {
        scanf("%d", &digits[i]);
    }

    for (int i = 0; i < 11; i++)
    {
        if (i % 2 == 0)
        {
            sum_odd += digits[i];
        }
        else
        {
            sum_even += digits[i];
        }
    }

    check_digit = (10 - ((sum_odd * 3 + sum_even) % 10)) % 10;

    printf("The check digit is: %d\n", check_digit);

    return 0;
}