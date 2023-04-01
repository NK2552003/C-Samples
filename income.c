#include <stdio.h>
int main(void)
{
    float amt, r;
    printf("Enter the total amount of money: ");
    scanf("%f", &amt);
    r=amt*0.15;
    printf("The total rate on the money will be: %.2f\n", r);
    return 0;
}