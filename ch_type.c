#include <stdio.h>
int main(void)
{
    char ch;    // using the character ASCII
    printf("Enter the character: ");
    scanf("%c",&ch);
    if (ch>=65 &&ch<=90)
    {
        printf("Upper case");
    }
    else if (ch>=97 && ch<=122)
    {
        printf("Lower case");
    }
    else if (ch>=48 && ch<=57){
        printf("Number");
    }
    else{
        printf("Special character");
    }
}