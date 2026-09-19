#include <stdio.h>

int main() {
    int s1;
    printf("Enter the marks in subject 1  \n ");
    scanf("%d", &s1);
    int s2;
    printf("Enter the marks in subject  2\n ");
    scanf("%d", &s2);
    int s3;
    printf("Enter the marks in subject  3\n ");
    scanf("%d", &s3);
    int s4;
    printf("Enter the marks in subject  4\n ");
    scanf("%d", &s4);
    int s5;
    printf("Enter the marks in subject  5 \n ");
    scanf("%d", &s5);
    int total = s1 + s2 + s3 + s4 + s5;
    float percentage = total / 5.0;


    printf("Percentage : %0.2f\n", percentage);
    if (percentage >= 90)
        printf("Grade : A");
    else if (percentage >= 80)
        printf("Grade : B");
    else if (percentage >= 70)
        printf("Grade : C");
    else if (percentage >= 60)
        printf("Grade : D");
    else
        printf("Grade : F");
    return 0;
}