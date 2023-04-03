#include <stdio.h>
int main(void)
{
    int wc, tax;
    printf("Water consumed in Gallons: ");
    scanf("%d",&wc);
    if (wc<100)
    {
        tax=0;
    }
    else if (wc>=100 && wc<=400)
    {
        tax = wc*5;
    }
    else if (wc>=401 && wc<=600)
    {
        tax= (400*5)+(wc-400)*7;
    }
    else
    {
        tax = (400*5)+(200*7)+(wc-600)*10;
    }
    printf("Total tax on given amount of water will be: %d Rs.\n",tax);
    return 0;
}