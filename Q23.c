#include <stdio.h>

int main() {
    int a;
   
    printf("Enter the 1st number  ");
    scanf("%d", &a);
     int b;
    printf("Enter the  2nd number  ");
    scanf("%d", &b);
     int result = 1;


    for(int i = 0; i<b ;i++  ){
      result = result * a;
    }
     printf("When %d is raised to power %d , we get %d", a, b, result);
    return 0;
}