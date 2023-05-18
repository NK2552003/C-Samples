//Write a program to input two matrix and find its multiplication.
#include <stdio.h>

void m1()
{
    int r,c;
    printf("Enter the number of rows here(for 1st matrix): ");
    scanf("%d",&r);
    printf("Enter the number of column here(for 1st matrix):");
    scanf("%d",&c);
}

void m2()
{
    int r1,c1;
    printf("Enter the number of rows here(for 2nd matrix): ");
    scanf("%d",&r1);
    printf("Enter the number of column here(for 2nd matrix):");
    scanf("%d",&c1);
}
int main(void)
{
    m1();
    m2();
    return 0;
}