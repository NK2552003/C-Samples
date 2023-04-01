//WAP to print the greatest number among two inputed numbers
#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number here: ");
    scanf("%d",&b);
    if (a<b)
    {
        printf("%d is greater\n",b);
    }
    else if (a>b)
    {
        printf("%d is greater\n",a);
    }
    else
    {
        printf("Both Numbers are equal\n");
    }
    return 0;
}