#include <stdio.h>
int main(void)
{
    char ch;    // using the character ASCII
    printf("Enter the character: ");
    scanf("%c",&ch);
    if (ch>='A' &&ch<='Z')
    {
        printf("Upper case\n");
    }
    else if (ch>='a' && ch<='z')
    {
        printf("Lower case\n");
    }
    else if (ch>='0' && ch<='0'){
        printf("Number\n");
    }
    else{
        printf("Special character\n");
    }
}