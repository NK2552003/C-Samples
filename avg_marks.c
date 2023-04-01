#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Physics Marks:");
    scanf("%d",&a);
    printf("Enter Chemistry Marks:");
    scanf("%d",&b);
    printf("Enter Mathematics Marks:");
    scanf("%d",&c);
    int avg = (a+b+c)/3;
    printf("AVERAGE MARKS ARE : %d\n", avg);
    if (avg<33)
    {
        printf("FAIL");
    }
    else if (avg>33 && avg<=45)
    {
        printf("THIRD DIVISION\n");
    }
    else if (avg>45 && avg<75)
    {
        printf("SECOND DIVISION\n");
    }
    else if (avg>=75 && avg<101)
    {
        printf("FIRST DIVISION\n");
    }
    else
    {
        printf("Invalid numbers are given please try again !\n");
    }
    return 0;
}