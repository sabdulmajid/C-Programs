#include <stdio.h>
#define DEFINED_INCHES_PER_POUND 166

int main (void) {

    float height, weight, width, volume, length;
    

    printf("Height of box (inches): ");
    scanf("%f", &height);
    printf("Length of box (inches): ");
    scanf("%f", &length);
    printf("Width of box (inches): ");
    scanf("%f", &width);

    volume = height * width * length;
    
    weight = (volume + (DEFINED_INCHES_PER_POUND-1))/DEFINED_INCHES_PER_POUND;

    printf("Volume of box (cubic inches): %.2f\n", volume);
    printf("Dimensional weight of the box is (pounds): %.2f\n", weight);
}