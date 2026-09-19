#include <stdio.h>

int main() {
    int n;
    printf("Enter a number "); 
    scanf("%d", &n);
    int sumeven = 0;
    int sumodd= 0;
    for(int i = 1; i<=n; i++){
                 if(i%2 == 0)
                    sumeven = sumeven + i;
                    else
                    sumodd = sumodd + i;

    }
    printf("The sum of even numbers from 1 to %d is %d\n", n, sumeven);
    printf("The sum of odd numbers from 1 to %d is %d\n", n, sumodd);
    return 0;
}