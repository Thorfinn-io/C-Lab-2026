#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    printf("Enter x ");
    scanf("%d", &x);
    int n;
    printf("Enter command ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("%d", 1 + x);
        break;
    case 2:
        printf("%0.2f", 1 + (x / 2));
        break;
    case 3:
        printf("%d", 1 + pow(x, 3));
        break;
    default:
        printf("%d", 1 + n * x);
        return 0;
    }
}