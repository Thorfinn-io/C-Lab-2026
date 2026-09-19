#include <stdio.h>

int main() {
    int n, sum =0;

    printf("enter numbers : ");
     
    while (1)
    {
        scanf("&d" , &n);
         if (n<0)
         break;
         sum= sum + n;

    }
    printf("sum = %d" , sum);

    return 0;
}