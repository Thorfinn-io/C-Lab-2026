#include <stdio.h>

int main() {
    int seconds = 31558150;
    
    int days = seconds/(24*60*60);
    int hours = seconds/(60*60);
    int minutes = seconds/60;

    
    printf("Days: %d\n", days);
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);

    return 0;
}