//This code is to make the rhombus 

#include <stdio.h>
int main(void)
{
    int r,c,a;
    for (r=1;r<=5;r++)
    {
        a=1;
        for (c=1;c<=5;c++)
        {
            if ((r+c)>=6)
            {
                printf("%d",a++);
            }
            else
            {
                printf(" ");
            }
        }
        a=a-2;
        for (c=1;c<r;c++)
        {
            printf("%d",a--);
        }
        printf("\n");
    }
    for (r=1;r<=4;r++)
    {
        a=1;
        for (c=1;c<=5;c++)
        {
            if (r>=c)
            {
                printf(" ");
            }
            else
            {
                printf("%d",a++);
            }
        }
        a=a-2;
        for (c=1;c<=4;c++)
        {
            if ((c+r)<5)
            {
                printf("%d",a--);
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