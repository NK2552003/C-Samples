// WAP to print whether the number is positive or negative
#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter any integer number:");
    scanf("%d",&a);
    if (a==0)
    {
        printf("Given number is 0\n");
    }
    else
    {
        printf("Given number is not equal to ZERO\n");
    }
    return 0;
}