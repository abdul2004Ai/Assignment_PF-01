

#include <stdio.h>
#include <conio.h>
int main() {
    float fahrenheit, celsius;

    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Equivalent temperature in Celsius: %.2f\n", celsius);

    return 0;
}

