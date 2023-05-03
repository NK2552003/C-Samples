//WAP to swap the two inputed numbers using function 
//call by value
#include <stdio.h>
int input(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    return a;
}

int swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("Values After swap in created function : %d,%d\n",a,b);
    return 0;
}
int main(){
    int a,b;
    a=input();
    b=input();
    swap(a,b);
    printf("Values in Main file: %d, %d\n",a,b);
    return 0;
}