#include <stdio.h>
// #include <conio.h>
int main(void)
{
    int age;
    printf("Enter your age here: ");
    scanf("%d",&age);
    if (age<=18)
    {
        printf("Under Age :)\n");
    }
    else if (age>18 && age<35)
    {   
        printf("Sorry to say but i mean it. You're having hard life Nah!\n");
    }
    else{
        printf("Golden Age\n");
    }
}