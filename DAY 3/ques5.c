#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Input
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Conversion formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Output
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
