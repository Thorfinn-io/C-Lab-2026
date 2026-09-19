#include <stdio.h>

int main(){
    int p, c, m, e, b ;
    printf("Enter the marks in physics :\n");
    scanf("%d", &p);
    printf("Enter the marks in chemistry :\n");
    scanf("%d", &c);
    printf("Enter the marks in mathematics :\n");
    scanf("%d", &m);
    printf("Enter the marks in english :\n");
    scanf("%d", &e);
    printf("Enter the marks in biology :\n");
    scanf("%d", &b);

    int total = p + c + m + e  + b;
    float percentage = (total/5.0);
    printf("Total marks = %d \n", total);
    printf("Your total percentage is : %0.2f \n", percentage);
    return 0;

}