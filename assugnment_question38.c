#include <stdio.h>
int main()
{
int n, i;
printf("Enter N:  ");
scanf("%d", &n);

for(int i=1; i<= n; i++)
{ 
    printf("%d " , i * i);

}


 return 0;
}