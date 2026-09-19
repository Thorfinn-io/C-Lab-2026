#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    int max;

    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);

    max = a>b ? (a>c ? a : c) : (b>c ? b : c);
    printf("The largest number is: %d", max);

    return 0;
}