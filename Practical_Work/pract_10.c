//Write a program to input two matrix and find its multiplication.
#include <stdio.h>
int main(void)
{
    int i,j,k,arr1[2][2],arr2[2][2],arr3[2][2];
    //to enter the first 2*2 matrix
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the value at arr1[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    //to enter the second 2*2 matrix
    printf("\n");
   for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Enter the value at arr2[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    //multiplying the array
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            arr3[i][j]=0;
            for(k=0;k<2;k++)
            {
                arr3[i][j] += arr1[i][k]*arr2[k][j];
            }
        }
    }
    //printing the array
    printf("\n\nEntered multiplication of the two entered two arrays are: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}