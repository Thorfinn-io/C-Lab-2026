

#include <stdio.h>

int main() {
    int b;
    int h;
    b = 30;
    h = 15;
    float area;
    area =  (b*h)/2.0 ;

    printf("The area of a triangle with base %d and height %d is %0.2f", b , h,  area);

    return 0;
}