#include <stdio.h>
int main(void)
{
    int a=5,y;
    y = a++ + a++;
    printf("%d\n",y);
    printf("%d\n",a);
}