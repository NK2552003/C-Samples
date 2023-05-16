#include <stdio.h>
    int Input(){
        int i;
        printf("Enter a:");
        scanf("%d",&i);
        return i;
    }
    int main(){
        int b;
        b=Input();
        printf("Value of B is : %d",b);
        return 0;
    }