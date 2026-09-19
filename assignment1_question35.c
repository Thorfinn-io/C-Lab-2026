#include <stdio.h>

int main() {
    int n;
    printf("Please enter the number :\t");
    scanf("%d", &n);
    int sum = 0 ;
    int d1;
    while( n != 0){
     d1 = n%10;
     n = n/10 ;
     sum =  sum + d1;
    }
    int sum2 = 0 ;
    int d2;
    while(sum != 0){
      d2 = sum%10 ;
      sum = sum/10;
      sum2 = sum2 + d2 ;
    }
    printf(" The single digit sum is : %d", sum2);
    return 0;
}