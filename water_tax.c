#include <stdio.h>
int main(void)
{
    int wc;
    printf("Enter the water consumed by the User(In units)");
    scanf("%d",&wc);
    if (wc<100)
    {
        printf("No Tax will be applied\n");
    }
    else if (wc>=100 && wc<=400)
    {
        printf("Tax will be: %d\n",wc*5);
    }
    else if (wc>400 && wc<=600)
    {
        printf("Tax will be: %d\n", ((400*5)*5+(wc-400)*7));
    }
    else{
        printf("Tax will be: %d\n", ((400*5)*5+(200*7)+(wc-600)*10)); 
    }
    return 0;
}