#include <stdio.h>
int main(void)
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Given character is a Vowel\n");
    }
    else{
        printf("Given character is not a vowel\n");
    }
}