// WAP to find the numbers at nth position 
#include <stdio.h>
#define size 7
int main(void)
{
    int t;
    int a[size]={34,43,23,12,54,65,76};
    printf("Enter the number that you want to find at index :");
    scanf("%d",&t);
    if (t<size)
    {
        printf("Number at index %d is %d\n",t,a[t]);
    }
    else
    {
        printf("Invalid input found! :( \n");
    }
    return 0;
}