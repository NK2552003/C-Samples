//Calculating the SI
#include <stdio.h>
int main(void)
{
    float p,r, si;
    int t, age;
    printf("Enter the age of the person: ");
    scanf("%d",&age);
    printf("Enter the time( in years): ");
    scanf("%d",&t);
    printf("Enter the total amount:");
    scanf("%f",&p);
    if (age<60)
    {
        if (t==1)
        {
            r=6;
        }
        else if (t>1 && t<=5)
        {
            r=8;
        }
        else if (t>5 && t<=10)
        {
            r=12;
        }
        else
        {
            r=18;
        }
    }
    else if (age>=60)
    {
            if (t==1)
            {
                r=5;
            }
            else if (t>1 && t<=5)
            {
                r=6;
            }
            else if (t>5 && t<=10)
            {
                r=10;
            }
            else
            {
                r=15;
            }
    }
    si= (p*r*t)/100;
    printf("Total simple interest will be : %.2f\n",si);
    return 0;
}