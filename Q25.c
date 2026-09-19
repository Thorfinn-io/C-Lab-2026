#include <stdio.h>

int main() {
    int a;
    printf("Enter the number ");
    scanf("%d", &a);
    int t;
    for(int i=1 ; i<=10; i++){
     t = a*i;
     printf("%d X %d = %d\n", a, i, t);
    }

    
    return 0;
}