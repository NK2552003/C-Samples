//WAP A PROGRAM TO PRINT THE LEFT RIGHT ANGLED TRIANGLE 
#include <stdio.h>
int main(void)
{
    //code 1
    /*
        *
       **
      ***
     ****
    *****
    */
    int r,c;
    for (r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
            if ((r+c)>=6)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
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
        int a=1;
        for (c=1;c<=5;c++)
        {
            if((r+c)>=6)
            {
                printf("%d",a++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
   }
   //Code 3
   /*
        1
       22
      333
     4444
    55555
   */
   for (r=1;r<=5;r++)
   {
        for (c=1;c<=5;c++)
        {
            if((r+c)>=6)
            {
                printf("%d",r);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
   }
   //Code 4
   /*
        A
       AB
      ABC
     ABCD
    ABCDE
   */
    for (r=1;r<=5;r++)
   {
        char ch = 'A';
        for (c=1;c<=5;c++)
        {
            if((r+c)>=6)
            {
                printf("%c",ch++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
   }
    return 0;
}