#include <stdio.h>
int main()
{
    int l,b,area;
    printf("Enter the length of the rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of the rectange:");
    scanf("%d",&b);
    area = l*b;
    printf("Area of the rectangle is %d\n",area);
    return 0;

}