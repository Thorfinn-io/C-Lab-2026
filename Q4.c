#include <stdio.h>

int main() {
    float c;
    float f;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %.2f", f);
    
    return 0;
}