#include <stdio.h>

int main() {
    int a = 3 ;
    int b = 6 ;
    a = a+b ;
    b = a-b ;
    a = a-b ;
    printf("The new value of a after swapping is %d\n", a);
    printf("The new value of b after swapping is %d\n", b);

    return 0;
}