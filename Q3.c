#include <stdio.h>

int main(){
    int b;
    int h;
    int d;
    int bonuses;
    printf("Enter the basic salary :");
    scanf("%d", &b);
     printf("Enter the house rent :");
    scanf("%d", &h);
     printf("Enter the dearness allowance :");
    scanf("%d", &d);
     printf("Enter the bonuses :");
    scanf("%d", &bonuses);

    int gross_salary = b + h + d + bonuses;
    printf("The gross salary is : %d:", gross_salary);
    return 0;
}