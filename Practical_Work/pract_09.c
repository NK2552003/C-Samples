//Write a program to demonstrate call by value and call by reference.
#include <stdio.h>
//Function of callbyValue

int input()
{
    int a;
    printf("Enter the number here: ");
    scanf("%d",&a);
    return a;
}
void callByValue(int a, int b)
{
    int temp;
    //swapping the values
    temp=a;
    a=b;
    b=temp;
}
void callByReference(int* a,int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(void)
{
    int num1, num2;
    num1 = input();
    num2 = input();
    callByValue(num1,num2);
    printf("Values after swaping in main function by value call a = %d, b= %d (you\'ll see no change here)\n",num1,num2);
    /*you will get to see no change in the values that are 
    in main body and values after swaping is not stored in num1 and num2 permanently*/
    callByReference(&num1,&num2);
    printf("Values after swaping in main function by reference call a = %d, b = %d\n",num1,num2);
    return 0;
}