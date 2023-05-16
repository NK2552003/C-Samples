//WAP to input 3 numbers and find the greatest among them
#include <stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    printf("Enter Third number: ");
    scanf("%d",&c);
    if (a>b)
    {
        if(a>c)
        {
            printf("%d is the greatest\n",a);
        }
    }
    else
    {
        if(b>c)
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