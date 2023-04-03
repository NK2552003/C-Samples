//WAP to print the n odd natural numbers 
#include <stdio.h>
int main(void)
{
    int i, n;
    printf("Enter the n odd natural numbers that you want to print: ");
    scanf("%d",&n);
    i=1;
    while (i<=(2*n))
    {
        printf("%d, ",i);
        i = i+2;
    }
    return 0;
}