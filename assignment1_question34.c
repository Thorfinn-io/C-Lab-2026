#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}








// using function
/*#include <stdio.h>
int fibonacci(int n);
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("Enter the nth term from zero\t");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        printf("The %dth term of fibonacci series is %d\n", i, fibonacci(i));
    }
    return 0;
}*/