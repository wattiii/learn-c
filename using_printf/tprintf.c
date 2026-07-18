/* print int and float values using printf */
#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 42;
    x = 3.14f;

    printf("|%d|%5d|%-5d|%05d|%5.3d|\n", i, i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|%-10.3gf|\n", x, x, x, x);

    return 0;
}