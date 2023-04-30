//program to find the average of n numbers
#include <stdio.h>
int main(void)
{
    int t,n;
    printf("How many numbers you want to add? ");
    scanf("%d",&n);
    int a[n];
    for (t=0;t<n;t++)
    {
        printf("Number %d is :",t+1);
        scanf("%d",&a[t]);
    }
    printf("\nEntered numbers are: [");
    for (t=0;t<n;t++)
    {
        printf("%d, ",a[t]);
    }
    printf("]\n");
    int sum=0;
    for (t=0;t<n;t++)
    {
        sum += a[t];
    }
    printf("Sum of all the numbers is : %d\n",sum);
    float avg=0;
    avg = sum/n;
    printf("Average of %d numbers is : %.2f\n",n, avg);
    return 0;
}