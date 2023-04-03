//This program is to write the hello world n times 
#include <stdio.h>
int main(void)
{
    int a;
    printf("Enter how many times you want to print the hello world?: ");
    scanf("%d",&a);
    if (a>0)
    {
        while (a>0)
        {
            printf("Hello World!\n");
            a--;
        }
    }
    else
    {
        printf("Invalid Input. Please try again!");
    }
    return 0;
}
