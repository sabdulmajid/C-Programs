#include <stdio.h>
#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)


int main (void) {
    float faren, celc;
    printf("Enter the Farenheit temperature: ");
    scanf("%f", &faren);

    celc = (faren - FREEZING_POINT) * SCALE_FACTOR;

    printf("Celsius temperature: %.1f", celc);
}