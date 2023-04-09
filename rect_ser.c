//making the rectangle pattern
#include <stdio.h>
int main(void)
{
    int r,c,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the numbers of columns:");
    scanf("%d",&c);
    for (j=1;j<=r;j++)
    {
        for (i=1;i<=c;i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}