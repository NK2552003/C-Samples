//WAP to input a string and check whether it is panindrome or not
#include <stdio.h>
#include <string.h>
//making the revstr function
void revstr(char str[])
{
    int i,l;
    char temp;
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        temp = str[i];
        str[i]=str[l-i-1];
        str[l-i-1]=temp;
    }
}
int main(void)
{
    char str[20],duplicate[20];
    int eq=0;
    int l,i;
    printf("Enter the string of length at most 20 character: ");
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l-1;i++)
    {
        duplicate[i]=str[i];
    }
    revstr(str);
    printf("Reversed string is: %s \n", str);
    for(i=0;i<l-1;i++)
    {
        if( duplicate[i]==str[i])
        {
            eq ++;
        }
    }
    if (eq==l-1)
    {
        printf("Given string is palindrome\n");
    }
    else
    {
        printf("Given string is not a palindrome\n");
    }
    return 0;
}