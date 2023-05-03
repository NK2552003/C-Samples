//Understanding the pointer concept
#include <stdio.h>

int main(){
    int x, *ptr;
    x=56;
    ptr= &x;
    printf("x=%d\nx=%d\n",x,*ptr);
    return 0;
}