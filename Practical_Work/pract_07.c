//WAP on linear search
#include <stdio.h>
int linearsearch(int a[],int size,int key)
{
    int i;
    int nf=0;
    for(i=0;i<=size;i++)
    {
        if(a[i]==key)
        {
            printf("Number found at index %d\n",i);
            break;
        }
        else
        {
            nf ++;
        }
    }
    if (nf==size+1)
    {
        printf("Key not found\nPlease try again :(\n");
    }
    return 0;
}

int main()
{
    int key;
    int a[]={23,45,67,86,49,33,21};
    int size= 7;
    printf("Enter the number that you want to find in the array that you\'ve created : ");
    scanf("%d",&key);
    linearsearch(a,size,key);
    return 0;
}