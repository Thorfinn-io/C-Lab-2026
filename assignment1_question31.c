#include <stdio.h>

int main()
{
    int n;
    printf("Please enter a number\t");
    scanf("%d", &n);
    int sum = 0;
    int n1;

    while (n != 0)
    {
        n1 = n % 10;
        n = n / 10;
        sum = sum + n1;
    }
    printf("The sum of all digits of the number n is %d", sum);
    return 0;
}