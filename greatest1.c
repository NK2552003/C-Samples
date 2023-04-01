//WAP to input 3 numbers and print the greatest among them
//this is the second method to print greatest number

#include <stdio.h>
int main(void)
{
    float a,b,c;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    printf("Enter the third number:");
    scanf("%f",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%.2f is greatest\n",a);
        }
    }
    else if (b>c)
    {
        if(b>a)
        {
            printf("%.2f is greatest\n",b);
        }
    }
    else if (c>b)
    {
        if(c>a)
        {
            printf("%.2f is the greatest\n",c);
        }
    }
    else
    {
        printf("CANNOT DETERMINE THE GREATEST\n");
    }
    return 0;
}