#include <stdio.h>

int main() {
    int a = 5 ;
    int b = 11;
    int c;
    c = a ;
    a = b;
    b = c;
    printf("The new value of a after swapping is %d\n ", a);
  printf("The new value of b after swapping is %d\n ", b);

    return 0;
}