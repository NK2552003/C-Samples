//WAP to print n natural numbers 
#include <stdio.h>
/*including the header file using preprocessor directive*/
int main(void)
{
    int i,n;
    printf("Enter natural no. that you want to print on the opt screen : ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d, ",i);
        i++;
    }
    return 0;
}