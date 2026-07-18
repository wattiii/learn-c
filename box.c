/* Calculate the weight of a box */

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    setbuf(stdout, NULL);

    printf("Enter the height of the box (in inches): ");
    scanf("%d", &height);
    printf("Enter the length of the box (in inches): ");
    scanf("%d", &length);
    printf("Enter the width of the box (in inches): ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %d x %d x %d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}