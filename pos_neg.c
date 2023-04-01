//WAP to print whether the given number is positive or negative
#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter the interger type number here :");
    scanf("%d",&a);
    if (a<0)
    {
        printf("Given number is Negative\n");
    }
    else if (a>0)
    {
        printf("Given number is Positive\n");
    }
    else
    {
        printf("Given number is NEUTRAL\n");
    }
    return 0;
}