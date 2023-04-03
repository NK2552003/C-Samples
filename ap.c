#include <stdio.h>
int main(void)
{
    int a,n,d,sum;
    sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter d:");
    scanf("%d",&d);
    while (a<=n)
    {
        printf("%d,",a);
        a += d;
        sum += a;
    }
    printf("\n%d is the sum of all ap series.\n",sum);
    return 0;
}