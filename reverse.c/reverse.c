/* this reverses a series of numbers*/

#include <stdio.h>

#define N 10 // Number of elements

int main() // main function
{
    long long a[N], i; // integer array a of size N and integer i

    printf("Enter %d numbers: ", N); // Prompt user to enter N numbers
    for (i = 0; i < N; i++)          // loop to read N numbers from user input
        scanf("%lld", &a[i]);        //

    printf("The numbers in reverse order are: ");
    for (i = N - 1; i >= 0; i--) // loop to print the numbers in reverse order
        printf("%lld ", a[i]);   // Print the numbers in reverse order

    printf("\n");

    return 0;
}