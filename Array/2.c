//changing an array element
#include <stdio.h>
int main(void)
{
    int t;
    int a[]= {1,2,3,4,5};
    for (t=0;t<=4;t++)
    {
        printf("%d,",a[t]);
    }
    a[0]=45;
    a[3]=456;
    printf("\n");
    for (t=0;t<=4;t++)
    {
        printf("%d,",a[t]);
    }
    return 0;
}