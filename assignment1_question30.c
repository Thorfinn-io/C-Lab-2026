#include <stdio.h>

int main()
{
    int n;
    printf("Please enter a number\t");
    scanf("%d", &n);
    int n1;

    while (n != 0)
    {
        n1 = n % 10;
        n = n / 10;
        printf("%d", n1);
    }

    return 0;
}