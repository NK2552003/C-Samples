//WAP A PROGRAM TO PRINT THE RIGHT ANGLED TRIANGLE 
/*
"
*
**
***
****
*****
"
*/

#include <stdio.h>
int main(void)
{
    int r,c,a;
    for (r=1;r<=5;r++)
    {
        for (c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
 
    //Code 2

    /*
    1
    12
    123
    1234
    12345
    */
    for (r=1;r<=5;r++)
    {
        a=1;
        for (c=1;c<=r;c++)
        {
            printf("%d",a++);
        }
        printf("\n");
    }

    //Code 3

    /*
    A
    AB
    ABC
    ABCD
    ABCDE
    */
   char ch;
   for (r=1;r<=5;r++)
    {
        ch='A';
        for (c=1;c<=r;c++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
   // Code 4
   /*
   1
   22
   333
   4444
   55555
   */
    for (r=1;r<=5;r++)
    {
        for (c=1;c<=r;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
    return 0;
}