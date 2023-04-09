//making the numtri_pattern pattern
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
        for (i=j;i>=1;i--)
        {
            printf("%d",j-1);
        }
        printf("\n");
    }
    return 0;
}