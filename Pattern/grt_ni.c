#include <stdio.h>
int main(void)
{
    int a,c,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("%d is the greatest\n",a);
        }      
    }
    else
    {
        if (b>c)
        {
            printf("%d is the greatest\n",b);
        }
        else
        {
            printf("%d is the greatest\n",c);
        }
    }
    return 0;
}