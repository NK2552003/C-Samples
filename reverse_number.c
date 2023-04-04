//WAP to print the reverse of the inputed number 
#include <stdio.h>
int main(void)
{
    int n,i,b;
    printf("Enter n:");
    scanf("%d",&n);
    while (n>0)
    {
        i= n%10;
        printf("%d",i);
        n=(n-i)/10;
    }
    return 0;
}