#include <stdio.h>
int main(){
    int i,r,fact;
    printf("[");
    for (i=1;i<=100;i++){
        fact=0;
        for(r=1;r<=100;r++){
            if (i%r==0){
                fact +=1;
            }
        }
        if (fact==2){
            printf("%d, ",i);
        }
    }
    printf("]\n");
    return 0;
}