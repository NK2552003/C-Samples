//Setting an array size 
#include <stdio.h>
int main(void)
{
    int t;
    int a[5];
    for (t=0;t<=4;t++)
    {
        printf("Enter the %d number: ",t);
        scanf("%d",&a[t]);
    }
    printf("Entered array is: [");
    for (t=0;t<=4;t++)
    {
        printf("%d, ",a[t]);
    }
    printf("]\n");
    return 0;
}