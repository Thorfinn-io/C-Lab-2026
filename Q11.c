#include <stdio.h>
#include <math.h>
int main() {
    int seconds ; 
    printf("Enter the time in seconds");
    scanf("%d", &seconds);
    int hour;
    int minute;
    int second;
    hour = floor(seconds / (60*60));
    minute = floor((seconds - (hour *60*60)) / 60);
    second = seconds - (hour *3600) - (minute *60);

    printf("Time in 24 hour format is : %d hours, %d minutes, %d seconds", hour, minute, second);

    return 0;
}