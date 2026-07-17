/* convert a Fahrenheit temperature to Celsius */
#include <stdio.h>

#define FREEZE_POINT 32.0f
#define CONVERSION_FACTOR (5.0f / 9.0f)

int main(void)
{
    float fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZE_POINT) * CONVERSION_FACTOR;

    printf("The temperature in Celsius is: %.2f\n", celsius);

    return 0;
}