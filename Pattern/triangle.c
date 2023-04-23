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
        for (c=1;c<=5;c++)
        {
            
        }
        printf("\n");
    }
    return 0;
}