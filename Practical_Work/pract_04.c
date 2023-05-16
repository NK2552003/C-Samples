//Write a program to input a number to check wether the number is palindrome or not
#include <stdio.h>
int main(void)
{
    int num,rev,duplicate;
    printf("Enter the number: ");
    scanf("%d",&num);
    duplicate = num;
    rev=0;
    while(num%10!=0)
    {
        rev = rev*10 + (num%10);
        num = num/10;
    }
    if(duplicate==rev)
    {
        printf("Given number is Palindrome number\n");
    }
    else
    {
        printf("Given number is not a Palindrome number\n");
    }
    return 0;
}
