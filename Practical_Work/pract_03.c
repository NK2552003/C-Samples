//Write a program to input a number obtain a number reversing the order of its digit example num=123 and rev=321
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
    printf("Reverse order of %d number is : %d\n",duplicate,rev);
    return 0;
}