//WAP to check whether the inputed number is the prime number 
#include <stdio.h>
int main(void)
{
    int n,i;
    int f=0;  //fraction times 
    printf("Enter the number: ");
    scanf("%d",&n);
    i=1;  //initial starting to divide the given number
    while (i<=n)
    {
        if (n%i==0)
        {
            f++;
        }
        i++;
    }
        if (f==2)
        {
            printf("Inputed number is prime number.\n");
        }
        else
        {
            printf("Inputed number is not a prime number.\n");
        }
        // the basic logic is that you'll only get modulus 0 two times, if not then it is not a prime number.
    return 0;
}