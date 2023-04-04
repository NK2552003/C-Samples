//WAP to print whether the number is panindrome number or not 
#include <stdio.h>
int main(void)
{
    int n,i,b,c;
    b=0;
    printf("Enter n:");
    scanf("%d",&n);
    c=n;
    while (n>0)
    {
        i= n%10;
        n=(n-i)/10;
        b= (b*10)+i;
    }
    if (b==c)
    {
        printf("Given number is Panindrome.\n");
    }
    else
    {
        printf("Given number is not a panindrome.\n");
    }
    return 0;
}