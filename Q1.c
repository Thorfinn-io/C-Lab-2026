#include <stdio.h>

int main(){
    int p; 
    int r;
    int t;
    printf("Enter   Principal (initial amount) :");
    scanf("%d", &p);
    printf("Enter   R = Rate of interest per year (%) :");
    scanf("%d", &r);
    printf("Enter   T = Time in years :");
    scanf("%d", &t);
    float si = (p*r*t)/100.0;
    printf("the simple interest is : %f", si);
    return 0;
}