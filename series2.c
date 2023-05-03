//Asked Question 1
#include <stdio.h>
int main(void){
    int i;
    printf("Enter m(To print the finite series of m^2-1):");
    scanf("%d",&i);
    int a=1;
    printf("[");
    while (a<=i){
        printf("%d, ",(a*a)-1);
        a+=1;
    }
    printf("]\n");
    return 0;
}