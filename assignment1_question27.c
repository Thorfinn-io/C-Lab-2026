#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    int i;
    for ( i= 2; i == 2 || i < n; i++)
    {
        if (n == 2)
            printf("You entered a prime number\n");
        else if (n % i == 0)
        {
            printf("You entered a composite number\n");
            break;
        }

    }
    if(i == (n))
    printf("You entered a prime number");
    return 0;
}