//WAP to print sum of a numbers and store it in another variable and sum it using function
//well let us think what we need 
/*
First we need to ask the user for input
so we'll make the "input()" function.
Second we will store the square of the number in y by making another objective function "square()"
third we'll sum for the inputed number and square number in "sum()" function
So let's make it!
*/
#include <stdio.h>
int input(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    return a;
}

int square(int a){
    int b;
    b=a*a;
    return b;
}

int sum(int a, int b){
    int c;
    c= a+b;
    return c;
}

int main(){
    int x,y,z;
    x=input();
    y=square(x);
    z=sum(x,y);
    printf("inputed number = %d\nSquared inputed number = %d\nSum of these numbers is = %d\n",x,y,z);

}