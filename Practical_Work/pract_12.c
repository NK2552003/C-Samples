//WAP to demonstrate array of structure
#include <stdio.h>
int main(void)
{
    struct data
    {
        char name[20];
        int college_id;
        int age;
    }p1,p2,p3;
    
    printf("Enter the name of the person:");
    scanf("%s",p1.name);
    printf("Enter the college id of user: ");
    scanf("%d",&p1.college_id);
    printf("Enter the age of the given person: ");
    scanf("%d",&p1.age);
    printf("\n\n");
     
    printf("Enter the name of the person:");
    scanf("%s",p2.name);
    printf("Enter the college id of user: ");
    scanf("%d",&p2.college_id);
    printf("Enter the age of the given person: ");
    scanf("%d",&p2.age);
    printf("\n\n");
    
    printf("Enter the name of the person:");
    scanf("%s",p3.name);
    printf("Enter the college id of user: ");
    scanf("%d",&p3.college_id);
    printf("Enter the age of the given person: ");
    scanf("%d",&p3.age);
    printf("\n\n");

    printf("p1\nName:%s\nCollege_id:%d\nAge:%d\n",p1.name,p1.college_id,p1.age);
    printf("\np2\nName:%s\nCollege_id:%d\nAge:%d\n",p2.name,p2.college_id,p2.age);
    printf("\np3\nName:%s\nCollege_id:%d\nAge:%d\n",p3.name,p3.college_id,p3.age);
    return 0;
}