#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("enter the first number\t");
    scanf("%d", &a);
    printf("enter the second number\t");
    scanf("%d", &b);
    int n;
    // 1 means addition
    // 2 means multiplication
    // 3 means division
    // 4 means subtraction
    printf("enter the command number\t");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a * b);
        break;
    case 3:
        if (b == 0)
            printf("UNDEFINED");
        else
            printf("%0.2f", (float)a / b);
        break;
    case 4:
        printf("%d", a - b);
    }
    return 0;
}