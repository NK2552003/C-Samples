#include <stdio.h>
int main(void)
{
    int a,b,c;
    a=5;
    b=10;
    printf("Numbers before swap\na=%d\nb=%d\n",a,b);
    c=b;
    b=a;
    a=c;
    printf("Numbers after swap\na=%d\nb=%d\n",a,b);
    return 0;
}