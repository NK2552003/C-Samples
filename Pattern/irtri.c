//WAP A PROGRAM TO PRINT THE RIGHT ANGLED TRIANGLE 
/*
"
*****
****
***
**
*
"
*/

#include <stdio.h>
int main(void)
{
    int r,c,a;
    for (r=5;r>=1;r--)
    {
        for (c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
 
    //Code 2

    /*
    12345
    1234
    123
    12
    1
    */
    for (r=5;r>=1;r--)
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
    ABCDE
    ABCD
    ABC
    AB
    A    
    */
   char ch;
   for (r=5;r>=1;r--)
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
   55555
   4444
   333
   22
   1
   */
    for (r=5;r>=1;r--)
    {
        for (c=1;c<=r;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
    return 0;
}