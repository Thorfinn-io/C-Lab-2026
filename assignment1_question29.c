#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Please enter a number  ");
    scanf("%d", &n);
    int n_2 = 0;
    int i = 0;

    int reversed_n = 0;
    while (n != 0)
    {

        int d1 = n % 10;
        n = n / 10;
        n_2 = n_2 + d1 * pow(10, i);
        reversed_n = reversed_n * 10 + d1;
        i++;
    }
    printf("The original number was %d\n", n_2);
    printf("The reversed number is %d\n", reversed_n);
    if (reversed_n == n_2)
        printf("This number is a PALINDROME");

    else
        printf("This number is not a PALINDROME");
    return 0;
}
