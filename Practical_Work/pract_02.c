//Write a Menu Driven Program to print a menu according to user choice the arithmetic operation on two number input by user
#include <stdio.h>
int main(void)
{
    int a,b,op,add,sub,mult,div,mod;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Menu\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Divison(\"Quotient\")\n5.Modulus\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            add = a+b;
            printf("Addition of two numbers will be: %d\n",add);
            break;
        case 2:
            sub = a-b;
            printf("Subtratction of two numbers will be: %d\n",sub);
            break;
        case 3:
            mult = a*b;
            printf("Multiplication of two numbers will be: %d\n",mult);
            break;
        case 4:
            div = a/b;
            printf("Quotient of two numbers will be: %d\n",div);
            break;
        case 5:
            mod = a%b;
            printf("remainder after complete divison is : %d\n",mod);
            break;
        default:
            printf("Invalid Input!\nPlease try again :(\n");
    }
    return 0;
}