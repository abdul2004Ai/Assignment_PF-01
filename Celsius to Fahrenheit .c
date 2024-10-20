#include <stdio.h>
#include <conio.h>
int main() {
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius is equivalent to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}