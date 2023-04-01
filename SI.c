// wap to print the si and total amount that a person has to give
// as we already know that we have the formula of si as p*r*t/100 and for total amount is si+p
// now we just have to impliment the things on our code
#include <stdio.h>
int main(void)
{
    float p, r , t , si, amt;
    //ask the user to input the principle, rate and time
    //then imply the formula on it
    printf("Enter principle: ");
    scanf("%f",&p);

    printf("Enter Rate: ");
    scanf("%f",&r);

    printf("Enter Time(In year): ");
    scanf("%f",&t);

    si = (p*r*t)/100;
    amt = si + p ;

//now print the output
    printf("The Simple interest on the given principal is: %.2f Rs.\n", si);
    printf("The total amount that he/she has to pay will be : %.2f Rs.\n", amt);
    return 0;
}