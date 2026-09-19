// PREREQUISITE
/*ascii values for LOWERCASE characters is between 97 - 122
ascii values for uppercase characters is between 65 - 90
ascii values for  digits is between 48-57
*/


#include <stdio.h>

int main() {
    char c;
    printf("Please enter a character or a digit ");
    scanf("%c", &c);
    if(c >= 97 && c <= 122) 
        printf("You entered a lowercase character");
    else if(c >= 65 && c <= 90) 
        printf("You entered an uppercase character");
     else if(c >= 48 && c <= 57) 
        printf("You entered a digit");
     else 
        printf("You entered a special character");
    
    return 0;
}

