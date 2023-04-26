#include <stdio.h>
int main(void)
{
    int r, a, c;
    for (r=1;r<=6;r++)
    {
        int a=1;
        for (c=1;c<=6;c++)
        {
            if ((c+r)>=7)
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
    return 0;
}