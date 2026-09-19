#include <stdio.h>

int main() {
    int m = 198 ;
    int p = 196 ;
    int c  = 182;
    int ent = 89 ;
    float CM = m/2.0 + p/2.0 + c/2.0 + ent ;


    printf("The marks in maths out of 200 is %d\n", m);
    printf("The marks in physics out of 200 is %d\n", p);
    printf("The marks in chemistry out of 200 is %d\n", c);
    printf("The marks in entrance exam out of 100 is %d\n", ent);
    printf("The cutoff marks is %f", CM);

    return 0;
}