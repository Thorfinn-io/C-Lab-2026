#include <stdio.h>

int main() {
    int hour;
    int minute;
    int second;
    printf("Enter the time in hours according to 24 hour format :");
    scanf("%d", &hour);
    printf(" minutes  :");
    scanf("%d", &minute);
    printf(" seconds :");
    scanf("%d", &second);


    int total_seconds = (hour*60*60) + (minute*60) + second;
    printf("The total time in seconds is %d", total_seconds);

    return 0; 
}