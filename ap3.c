//wap to print 2,5,10,17,26,.... and so on 
#include <stdio.h>
int main(void)
{
    int n,a,d;
    a=1;
    printf("Enter n:");
    scanf("%d",&n);
    while (a<=n)
    {
        d=(a*a)+1;
        printf("%d,",d);
        a +=1;
    }
    return 0;
}