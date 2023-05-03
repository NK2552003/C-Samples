//Display the hello world N times using function call
#include <stdio.h>
void display(){
    printf("Hello World!");
}
int main(){
    int n;
    printf("Enter how many times you want to print 'Hello World' :");
    scanf("%d",&n);
    int i;
    for (i=1;i<=n;i++){
        display();
    }
    return 0;
}