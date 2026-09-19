#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("enter the first number\t");
    scanf("%d", &a);
    printf("enter the second number\t");
    scanf("%d", &b);
    char ch;
    // a means addition
    // m means multiplication
    // d means division
    // s means subtraction
    printf("enter the command ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case 'a':
        printf("%d", a + b);
        break;
    case 'm':
        printf("%d", a * b);
        break;
    case 'd':
        if (b == 0)
            printf("UNDEFINED");
        else
            printf("%0.2f", (float)a / b);
        break;
    case 's':
        printf("%d", a - b);
    }
    return 0;
}