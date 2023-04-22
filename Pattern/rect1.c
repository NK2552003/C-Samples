//WAP a program to print the rectangle pattern 
// code 1
#include <stdio.h>
int main(void)
{
    int r,c;
    printf("\nPrinting the asterisk rectangle\n");
    for (r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\nPrinting the column numbers\n");
    // Code 2 (to print the column numbers instead of asterisk)
    for (r=1; r<=5; r++)
    {
        for (c=1;c<=5;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
    printf("\nPrinting the row number\n");
    // Code 3 (to print the row numbers instead of asterisk)
    for (r=1; r<=5; r++)
    {
        for (c=1;c<=5;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
    printf("\nPrinting the number serial wise \n");
    // Code 4 (to print the numbers in serial instead of asterisk)
    int a = 0;
    for (r=1; r<=5; r++)
    {
        for (c=1;c<=5;c++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
    // Code 5 (to print the numbers in serial instead of asterisk)
    printf("\nPrinting the alphabets instead of numbers or special letter \n");
    // make sure to take another variable if using the int type 'a' again then it'll show you the error
    char ch = 'A';
    for (r=1; r<=5; r++)
    {
        for (c=1;c<=5;c++)
        {
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}

