// WAP to print fibonacci series 
#include <stdio.h>
int main(void)
{
    int n,i,a,b,c;
    i=3;
    a=0;
    b=1;
    printf("Enter how much numbers that you need in fibonacci series?");
    scanf("%d",&n);
    printf("0,1,");
    while (i<=n)
    {
        c = a + b;
        printf("%d,",c);
        a = b;
        b = c;
        i++;
    }
    printf("\n");
    return 0;
}