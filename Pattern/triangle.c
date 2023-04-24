//Making an equilateral triangle
#include <stdio.h>
int main(void)
{
    int r, c;
    for (r=1;r<=5;r++)
    {
        int a=1;
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
        a= a-2;
        for (c=1;c<r;c++)
        {
            printf("%d",a--);
        }
        printf("\n");
    }
    return 0;
}