#include <stdio.h>
int main(void){
    int a, b, c;
    printf("Enter the number a:");
    scanf("%d",&a);
    printf("Enter the number b:");
    scanf("%d",&b);
    printf("Enter the number a:");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("%d is the greatest\n",a);
    }
    else if (b>c && b>a){
        printf("%d is the greatest\n",b);
    }
    else if (c>b && c>a){
        printf("%d is the greatest\n",c);
    }
    else{
        printf("Cannot determine the greatest number");
    }
}