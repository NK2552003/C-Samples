//WAP to print the n even natural numbers 
#include <stdio.h>
int main(void)
{
    int i, n;
    printf("Enter the n even natural numbers that you want to print: ");
    scanf("%d",&n);
    i=2;
    while (i<=(2*n))
    {
        printf("%d, ",i);
        i = i+2;
    }
    return 0;
}