//WAP to print the sum of the inputed number digits
#include <stdio.h>
int main(void)
{
    int n,i,b;
    b=0;
    printf("Enter n:");
    scanf("%d",&n);
    while (n>0)
    {
        i= n%10;
        n=(n-i)/10;
        b= b+i;
    }
    printf("Sum of the inputed number of digits will be: %d\n",b);
    return 0;
}