//WAP to input two numbers and print them in ascending order 
#include <stdio.h>
int main(void)
{
    int a,b;
    printf("MAKE SURE TO INPUT INTEGER TYPE ONLY\nOTHERWISE IT WILL CRASH\n");
    printf("Enter the number a:");
    scanf("%d",&a);
    printf("ENter the number b:");
    scanf("%d",&b);
    if (a>b)
    {
        printf("%d, %d\n",b,a);
    }
    else if (a<b)
    {
        printf("%d, %d\n",a,b);
    }
    else
    {
        printf("Both are same number\nso......\nNO ASCENDING ORDER \n");
    }
    return 0;
}