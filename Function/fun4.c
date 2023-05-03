//WAP to input two numbers and find the greatest among them using function 
#include <stdio.h>
int input(){
    
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    return a;
}

int check(int a,int b){
    int x;
    if (a>b){
        x = a;
    }
    else{
        x = b;
    }
    return x;
}

int main(){
    int x,y;
    x= input();
    y= input();
    int greatest = check(x,y);
    printf("The greatest number will be : %d",greatest);
    return 0;
}