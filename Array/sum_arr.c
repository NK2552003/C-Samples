//this file hold the program to sum all the elements inside array 
#include <stdio.h>
int main(void)
{
    int t;
    int a[6];
    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    a[4]=5;
    a[5]=6;
    printf("Predefined array in C is given as \n [");
    for (t=0;t<=5;t++)
    {
        printf("%d, ",a[t]);
    }
    printf("]\n");
    printf("Let us modify it now!\n");
    for (t=0;t<=5;t++)
    {
        printf("The number at index %d will be: ",t);
        scanf("%d",&a[t]);
    }
    printf("\nArray after modifying the values is : [");
    for (t=0;t<=5;t++)
    {
        printf("%d,",a[t]);
    }
    printf("]\n");
    printf("\n\nNow let\'s add all the numbers in the array!\n");
    int sum = 0;
    for (t=0;t<=5;t++)
    {
        sum +=a[t];
    }
    printf("\nSum of all the numbers in the array after modifying it is: %d\n",sum);

    return 0;
}