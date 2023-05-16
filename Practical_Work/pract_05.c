//Write a program to input a number to check wether the number is prime or not.
#include <stdio.h>
int main(void)
{
    int i,num;
    printf("Enter the number: ");
    scanf("%d",&num);
    i=0;
    int fact =0;
    while(i<=num)
    {
        if(num%i==0)
        {
            fact ++;       
        }
        i++;
    }
    if (fact==2)
    {
        printf("Given number is a prime number\n");
    }
    else
    {
        printf("Given number is not a prime number\n");
    }
    return
}