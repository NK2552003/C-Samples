//Write a program to draw a Diamond shape pattern

#include <stdio.h>
int main(void)
{
    int r,c;
    for (r=1;r<=5;r++)
    {
        for (c=1;c<=5;c++)
        {
            if ((r+c)>=6)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (c=1;c<r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (r=1;r<=4;r++)
    {
        for (c=1;c<=5;c++)
        {
            if (r>=c)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        for (c=1;c<=4;c++)
        {
            if ((c+r)<5)
            {
                printf("*");
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